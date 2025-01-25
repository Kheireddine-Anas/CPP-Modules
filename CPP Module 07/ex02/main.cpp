#include <iostream>
#include "Array.hpp"

int main() {
	try {
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		Array<int> intArray(5);
		for (unsigned int i = 0; i < intArray.size(); i++) {
			intArray[i] = i * 10;
		}
		std::cout << "Int array size: " << intArray.size() << std::endl;

		std::cout << "Integer array: ";
		for (unsigned int i = 0; i < intArray.size(); i++) {
			std::cout << intArray[i] << " ";
		}
		std::cout << std::endl;

		Array<int> copyArray = intArray;
		// copyArray[10] = 999;
		copyArray[0] = 999;
		std::cout << "Original first element: " << intArray[0] << std::endl;
		std::cout << "Copy first element: " << copyArray[0] << std::endl;

		Array<std::string> strArray(3);
		strArray[0] = "Hello";
		strArray[1] = "World";
		strArray[2] = "1337";

		std::cout << "String array: ";
		for (unsigned int i = 0; i < strArray.size(); i++) {
			std::cout << strArray[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Accessing out-of-bounds: ";
		std::cout << intArray[10] << std::endl;

	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
