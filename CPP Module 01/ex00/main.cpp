/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:58:24 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 10:04:04 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	// Heap allocation
	Zombie* Miner = newZombie("Ma9La");
	Miner->announce();
	delete Miner;

	//Stack allocation
	randomChump("SKN");
}