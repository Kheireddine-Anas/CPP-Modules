#include "RPN.hpp"
#include <iostream>

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <RPN expression>" << std::endl;
		return 1;
	}

	RPN rpn;
	try {
		rpn.evaluate(av[1]);
	} catch ( std::exception& e ) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}