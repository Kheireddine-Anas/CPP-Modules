/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:59:52 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:59:53 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av ) {
	if (ac != 2) {
		std::cout << "usage : " << av[0] << " <level>" << std::endl;
		return 1;
	}

	Harl harl;
	harl.complain(av[1]);
	
	return 0;
}