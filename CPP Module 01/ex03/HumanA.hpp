#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string nm, Weapon& wpn);
		void attack(void);
};

#endif