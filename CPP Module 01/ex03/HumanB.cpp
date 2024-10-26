#include "HumanB.hpp"

HumanB::HumanB(std::string nm) : name(nm), weapon(NULL) {}

void HumanB::attack(void) {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " dont't a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& wpn) {
	this->weapon = &wpn;
}