#include "Weapon.hpp"

Weapon::Weapon(std::string tp) : type(tp) {}

const std::string& Weapon::getType() {
	return type;
}

void Weapon::setType(std::string newType) {
	this->type = newType;
}