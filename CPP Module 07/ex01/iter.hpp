#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter( T* array, size_t lenght, void (*func)(T&)) {
	if (!array || lenght <= 0 || !func) {
		std::cout << "Invalide ARGS!" << std::endl;
		return;
	}

	for (size_t i = 0; i < lenght; i++) {
		func(array[i]);
	}
}

template <typename T>
void printElem( T& elem ) {
	std::cout << elem << " ";
}

#endif