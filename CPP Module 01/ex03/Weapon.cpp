/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:09:07 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:09:08 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string tp) : type(tp) {}

const std::string& Weapon::getType() {
	return type;
}

void Weapon::setType(std::string newType) {
	this->type = newType;
}