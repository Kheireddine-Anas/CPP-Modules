#include "functions.hpp"
#include <iostream>

int main() {
	Base* obj = generate();
	Base* obj1 = generate();
	Base* obj2 = generate();
	
	std::cout << "PTR: " << std::endl;
	identify(obj);

	identify(obj1);

	identify(obj2);

	identify(NULL);

	std::cout << "REF: " << std::endl;
	identify(*obj);
	identify(*obj1);
	identify(*obj2);

	delete obj;
	delete obj1;
	delete obj2;

	return 0;
}