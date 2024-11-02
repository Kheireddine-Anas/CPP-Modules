/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:08:41 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:08:42 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& wpn) : name(nm) , weapon(wpn) {}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}