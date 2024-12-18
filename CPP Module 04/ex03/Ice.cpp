#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" ) {}

Ice::~Ice() {}

Ice::Ice( Ice const &other ) {
	this->_type = other._type;
}

Ice &Ice::operator=( Ice const &other ) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}