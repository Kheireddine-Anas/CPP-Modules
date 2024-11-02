/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:58:51 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 11:19:03 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 5;

	Zombie* Zombies = zombieHorde(N, "Ma9La");
	
	for (int i = 0; i < N; i++) {
		Zombies[i].announce();
	}
	delete[] Zombies;
}