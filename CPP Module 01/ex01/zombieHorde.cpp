/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:59:14 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:59:15 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* Crowd = new Zombie[N];
	for (int i = 0; i < N; i++)
		Crowd[i].set_name(name);
	return Crowd;
}