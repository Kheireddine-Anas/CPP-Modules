#include <limits>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::ScalarConverter( const ScalarConverter& other ) { (void)other; };

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& other ){ (void)other; return *this; };

ScalarConverter::~ScalarConverter(){};

bool ScalarConverter::isChar( const std::string& str ) {
	return str.length() == 1 && !isdigit(str[0]);
}

bool ScalarConverter::isInt( const std::string& str ) {
	char *end;
	long num = strtol(str.c_str(), &end, 10);
	return *end == '\0' && num >= std::numeric_limits<int>::min() && num <= std::numeric_limits<int>::max();
}

bool ScalarConverter::isFloat( const std::string& str ) {
	char *end;
	strtof(str.c_str(), &end);
	return *end == 'f' && *(end + 1) == '\0';
}

bool ScalarConverter::isDouble( const std::string& str ) {
	char *end;
	strtod(str.c_str(), &end);
	return *end == '\0';
}

bool ScalarConverter::isSpecialCase( const std::string& str ) {
	return (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff");
}

const char* ScalarConverter::ErrorException::what() const throw() {
	return "Wrong format!";
}

void ScalarConverter::convert( const std::string& literal ) {
	if (isSpecialCase(literal)) {
		std::cout << "char  : impossible" << std::endl;
		std::cout << "int   : impossible" << std::endl;
		std::cout << "float : " << literal << (literal.find('f') == std::string::npos ? "f" : "") << std::endl;
		std::cout << "double: " << literal.substr(0, literal.size() - (/*literal.back() == 'f'*/ literal[literal.size() - 1] == 'f' ? 1 : 0)) << std::endl;
		return;
	}

	try {
		if (isChar(literal)) {
			char c = literal[0];
			std::cout << "char  : '" << c << "'"<< std::endl;
			std::cout << "int   : " << static_cast<int>(c) << std::endl;
			std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(c) << std::endl;
		}
		else if (isInt(literal)) {
			// int i = std::stoi(literal);
			char *end;
			int i = static_cast<int>(strtol(literal.c_str(), &end, 10));
			if (i < 32 || i > 126)
				std::cout << "char  : Non displayable" << std::endl;
			else
				std::cout << "char  : '" << static_cast<char>(i) << "'" << std::endl;
			std::cout << "int   : " << i << std::endl;
			std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(i) << std::endl;
		}
		else if (isFloat(literal)) {
			// float f = std::stof(literal);
			char *end;
			float f = strtof(literal.c_str(), &end);
			if (f < 32 || f > 126)
				std::cout << "char  : Non displayable" << std::endl;
			else
				std::cout << "char  : '" << static_cast<char>(f) << "'" << std::endl;

			if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
				std::cout << "int   : Impossible" << std::endl;
			else
				std::cout << "int   : " << static_cast<int>(f) << std::endl;

			std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f) << std::endl;
		}

		else if (isDouble(literal)) {
			// double d = std::stod(literal);
			char *end;
			double d = strtod(literal.c_str(), &end);
			if (d < 32 || d > 126)
				std::cout << "char  : Non displayable" << std::endl;
			else
				std::cout << "char  : '" << static_cast<char>(d) << "'" << std::endl;
			if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
				std::cout << "int   : Impossible" << std::endl;
			else
				std::cout << "int   : " << static_cast<int>(d) << std::endl;

			std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << d << std::endl;
		}
		else {
			throw ErrorException();
		}
	} catch ( std::exception& e ) {
		std::cout << "Error : " << e.what() << std::endl;
	}
}