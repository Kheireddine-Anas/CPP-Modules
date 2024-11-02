/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:59:11 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:59:12 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
	Zombie();
	Zombie(std::string nm);
	~Zombie(void);
	void announce(void);
	void set_name(std::string nm1);
};

Zombie* zombieHorde( int N, std::string name );

#endif