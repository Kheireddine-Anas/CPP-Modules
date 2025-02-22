/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:22:26 by akheired          #+#    #+#             */
/*   Updated: 2025/02/17 13:22:27 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <RPN expression>" << std::endl;
		return 1;
	}

	RPN rpn;
	try {
		rpn.evaluate(av[1]);
	} catch ( std::exception& e ) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}