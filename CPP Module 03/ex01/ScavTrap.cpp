#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("M9L") {
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << this->name << " has been constructed." << std::endl;
}

ScavTrap::ScavTrap( const std::string& nm ) : ClapTrap(nm) {
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << this->name << " has been constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " has been destroyed." << std::endl;
}

ScavTrap::ScavTrap ( ScavTrap& other ) : ClapTrap( other ) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap Assignement Operator Called." << std::endl;
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	if (hit_points > 0 && energy_points > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;
	}
}

void ScavTrap::attack( ClapTrap& target ) {
	if (hit_points > 0 && energy_points > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target.getName() << " causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;
	}
	target.takeDamage(attack_damage);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}