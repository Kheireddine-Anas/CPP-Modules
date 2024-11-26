#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal(other) {
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat Copy Assignement Operator Called" << std::endl;
	return *this;
}

void WrongCat::makeSound() {
	std::cout << "WrongCat Meow Sound" << std::endl;
}