#include "Cure.hpp"

Cure::Cure() : AMateria( "cure" ) {}

Cure::~Cure() {}

Cure::Cure( Cure const &other ) {
	this->_type = other._type;
}

Cure &Cure::operator=( Cure const &other ) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName()  << "'s wounds *";
}