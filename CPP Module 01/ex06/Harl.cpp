/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:14:00 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:59:47 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int getLevel( std::string levels) {
	if (levels == "DEBUG")
		return 1;
	if (levels == "INFO")
		return 2;
	if (levels == "WARNING")
		return 3;
	if (levels == "ERROR")
		return 4;
	return 0;
}

void Harl::complain( std::string level ) {
	int levels = getLevel( level );

	switch (levels) {
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
