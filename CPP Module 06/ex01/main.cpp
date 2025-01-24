#include <iostream>
#include "Serializer.hpp"

int main() {
	Data original;

	original.id = 42;
	original.c = 'A';
	original.value = 3.14f;

	std::cout << "Original Data address: " << &original << std::endl;
	std::cout << "Original values: id = " << original.id << ", c = " << original.c << ", value = " << original.value << std::endl;
	
	uintptr_t ser = Serializer::serialize(&original);
	std::cout << "Serialized uintptr_t value: " << ser << std::endl;

	Data* deserialized = Serializer::deserialize(ser);
	std::cout << "Deserialized Data address: " << deserialized << std::endl;
    std::cout << "Deserialized values: id = " << deserialized->id << ", c = " << deserialized->c << ", value = " << deserialized->value << std::endl;

	if (&original == deserialized) {
		std::cout << "Pointers are the same type." << std::endl;
	}
	else {
		std::cout << "Pointers do not match!" << std::endl;	
	}

	return 0;
}