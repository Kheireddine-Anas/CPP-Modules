#include "Dog.hpp"


Dog::Dog() {
	type = "Dog";
	std::cout << "Constructor Called For Dog Class" << std::endl;	
}

Dog::~Dog() {
	std::cout << "Destructor Called For Dog Class" << std::endl;	
	
}

Dog::Dog( const Dog& other ) : Animal( other ), brain( new Brain( *other.brain ) ) {
	std::cout << "Copy Constructor Called For Dog Class" << std::endl;	
	
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		this->type = other.type;
		*brain = *other.brain;
	}
	std::cout << "Assignment operator Called For Dog Class" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "eWee eWee!" << std::endl;
}