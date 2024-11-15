#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap {
	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public:
		ClapTrap();
		ClapTrap( const std::string nm );
		~ClapTrap();
		ClapTrap( ClapTrap& other );
		ClapTrap& operator=( const ClapTrap& other );

		void attack( const std::string& target );
		void attack( ClapTrap& target);
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		const std::string& getName();
};


#endif