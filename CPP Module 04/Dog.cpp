#include "Dog.hpp"


Dog::Dog() {
	type = "Dog";
	std::cout << "Constructor Called For Dog Class" << std::endl;	
}

Dog::~Dog() {
	std::cout << "Destructor Called For Dog Class" << std::endl;	
	
}

Dog::Dog( const Dog& other ) {
	std::cout << "Copy Constructor Called For Dog Class" << std::endl;	
	
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Assignment operator Called For Dog Class" << std::endl;
	return *this;
}

void Dog::makeSound() {
	std::cout << "eWee eWee!" << std::endl;
}