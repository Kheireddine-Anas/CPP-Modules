/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:09:10 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:09:11 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string tp);
		const std::string& getType();
		void setType(std::string newType);
};

#endif