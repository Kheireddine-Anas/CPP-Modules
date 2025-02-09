#include "Span.hpp"

int main() {
	try {
		Span lst(6);
		lst.addNumber(10);
		lst.addNumber(100);
		lst.addNumber(2167);
		// lst.addNumber(1000);

		std::cout << "Shortest Span : " << lst.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << lst.longestSpan() << std::endl;

		std::vector<int> more;
		more.push_back(21);
		more.push_back(5);
		more.push_back(8);

		lst.addNumbers(more.begin(), more.end());

		std::cout << "Shortest Span : " << lst.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << lst.longestSpan() << std::endl;

	} catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
