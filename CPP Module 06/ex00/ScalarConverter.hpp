#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter& operator=( const ScalarConverter& other );
		~ScalarConverter();

		static bool isChar( const std::string& str );
		static bool isInt( const std::string& str );
		static bool isFloat( const std::string& str );
		static bool isDouble( const std::string& str );
		static bool isSpecialCase( const std::string& str );

	public:
		static void convert( const std::string& literal );

		class ErrorException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
