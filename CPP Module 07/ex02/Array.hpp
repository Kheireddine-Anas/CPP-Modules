#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T* elements;
		unsigned int _size;
	public:
		Array();
		Array( unsigned int );
		Array( const Array& other );
		Array& operator=( const Array& other );
		~Array();

		T& operator[]( unsigned int index );
		const T& operator[]( unsigned int index ) const;
		unsigned int size() const;
};


#include "Array.tpp"



#endif