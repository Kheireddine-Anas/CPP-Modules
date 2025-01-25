#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), _size(0) {}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n) {
	elements = new T[n]();
}

template <typename T>
Array<T>::Array( const Array& other ) : _size(other._size) {
	elements = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		elements[i] = other.elements[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=( const Array& other ) {
	if (this != &other) {
		delete[] elements;
		_size = other._size;
		elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			elements[i] = other.elements[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size) {
		throw std::out_of_range("Index out of bounds");
	}
	return elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size) {
		throw std::out_of_range("Index out of bounds");
	}
	return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}