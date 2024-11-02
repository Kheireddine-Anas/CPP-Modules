/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:08:48 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:08:49 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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