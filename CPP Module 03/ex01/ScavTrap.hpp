#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( const std::string& nm );
		~ScavTrap();
		ScavTrap( ScavTrap& other );
		ScavTrap& operator=( const ScavTrap& other );

		void attack( const std::string& nm );
		void attack( ClapTrap& target );
		void guardGate();
};



#endif