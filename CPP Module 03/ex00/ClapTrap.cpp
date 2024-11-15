/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:38:59 by akheired          #+#    #+#             */
/*   Updated: 2024/11/14 18:40:51 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string nm) :name(nm), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap& other ) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy Assignement Operator Called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hit_points = other.hit_points;
	}

	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::attack( const std::string& target) {
	if (hit_points > 0 && energy_points > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;

		return;
	}

	std::cout << "ClapTrap " << name << " has no energy or hit points" << std::endl;
}

void ClapTrap::attack( ClapTrap& target) {
	if (hit_points > 0 && energy_points > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target.name << " causing " << attack_damage << " points of damage!" << std::endl;
		--energy_points;
		target.takeDamage(attack_damage);

		return;
	}
	
	std::cout << "ClapTrap " << name << " has no energy or hit points" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	hit_points -= amount;
	if (hit_points < 0) hit_points = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " damage points! Current Hit Points: " << hit_points << std::endl; 
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (hit_points > 0 && energy_points > 0) {
		hit_points += amount;
		--energy_points;
		std::cout << "ClapTrap " << name << " is repaired by " << amount << ", Current Hit Points: " << hit_points << std::endl;

		return;	
	}

	std::cout << "ClapTrap " << name << " has no energy or hit points" << std::endl;
}
