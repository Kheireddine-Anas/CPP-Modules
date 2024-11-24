#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Constructor Called For Cat Class" << std::endl;	
}

Cat::~Cat() {
	std::cout << "Destructor Called For Cat Class" << std::endl;	
	
}

Cat::Cat( const Cat& other ) {
	std::cout << "Copy Constructor Called For Cat Class" << std::endl;	
	
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Assignment operator Called For Cat Class" << std::endl;
	return *this;
}

void Cat::makeSound() override {
	std::cout << "Meo Meo!" << std::endl;
}