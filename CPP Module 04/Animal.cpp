#include "Animal.hpp"


Animal::Animal() {
	std::cout << "Constructor Called For Animal Class" << std::endl;	
}

Animal::~Animal() {
	std::cout << "Destructor Called For Animal Class" << std::endl;	
	
}

Animal::Animal( const Animal& other ) : type(other.type) {
	std::cout << "Copy Constructor Called For Animal Class" << std::endl;	
}

Animal& Animal::operator=( const Animal& other ) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Assignment operator Called For Animal Class" << std::endl;
	return *this;
}

void Animal::makeSound() {
	std::cout << "Animals Sound" << std::endl;
}

std::string Animal::getType() {
	return this->type;
}