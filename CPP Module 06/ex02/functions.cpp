#include "functions.hpp"
#include <ctime>
#include <cstdlib>

Base *generate() {
	// std::srand(std::time(0));
	static bool initialized = false;
	if (!initialized) {
		std::srand(std::time(0));
		initialized = true;
	}
	int randomValue = std::rand() % 3;
	if (randomValue == 0) {
		std::cout << "Class A Generated" << std::endl;
		return new A();
	}
	else if (randomValue == 1) {
		std::cout << "Class B Generated" << std::endl;
		return new B();
	}
	else {
		std::cout << "Class C Generated" << std::endl;
		return new C();
	}
	return NULL;
}

void identify( Base* p ) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown type" << std::endl;
	}
}

void identify( Base& p ) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception&) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception&) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception&) {}

	std::cout << "Unknown type" << std::endl;
}
