#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string nm);
		void attack(void);
		void setWeapon(Weapon& wpn);
};


#endif