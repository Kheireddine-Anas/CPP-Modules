/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:59:04 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:59:05 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string nm) : name(nm) {
    std::cout << "\033[33mZombie: " << this->name << " Created\033[0m" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "\033[31mZombie: " << this->name << " destroyed\033[0m" << std::endl;
}

void Zombie::announce(void) {
    std::cout << "\033[32m" << this->name << " : BraiiiiiiinnnzzzZ\033[0m" << std::endl;
}

void Zombie::set_name(std::string nm1) {
    this->name = nm1;
}
