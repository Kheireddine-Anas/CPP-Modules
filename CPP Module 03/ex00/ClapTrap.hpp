#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap {
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap( ClapTrap& other );
		ClapTrap& operator=( const ClapTrap& other );
		ClapTrap( std::string nm );

		void attack( const std::string& target );
		void attack( ClapTrap& target);
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};


#endif