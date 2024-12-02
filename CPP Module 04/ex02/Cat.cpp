#include "Cat.hpp"

Cat::Cat() : brain( new Brain() ) {
	type = "Cat";
	std::cout << "Constructor Called For Cat Class" << std::endl;	
}

Cat::~Cat() {
	std::cout << "Destructor Called For Cat Class" << std::endl;	
	delete brain;
}

Cat::Cat( const Cat& other ) : Animal( other ), brain( new Brain( *other.brain ) ) {
	std::cout << "Copy Constructor Called For Cat Class" << std::endl;	
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Assignment operator Called For Cat Class" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat: Meo Meo!" << std::endl;
}