#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap {
	private:
		std::string name;
		int hit_point = 10;
		int attack_damage = 0;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap( ClapTrap& other );
		ClapTrap& operator=(const ClapTrap& other);
};



#endif