#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "WrongAnimal Assignement Operator called" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() {
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
