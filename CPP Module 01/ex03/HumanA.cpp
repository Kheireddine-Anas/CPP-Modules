#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& wpn) : name(nm) , weapon(wpn) {}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}