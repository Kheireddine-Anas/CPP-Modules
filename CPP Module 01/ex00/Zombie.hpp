/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:58:20 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:58:54 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string nm);
	~Zombie(void);
	void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
