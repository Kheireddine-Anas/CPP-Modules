/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:08:51 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:08:57 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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