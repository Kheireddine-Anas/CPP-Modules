/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:08:44 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:08:45 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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