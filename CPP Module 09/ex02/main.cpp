/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:23:47 by akheired          #+#    #+#             */
/*   Updated: 2025/02/17 14:23:48 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int main(int ac, char** av) {
	if (ac < 2) {
		std::cout << "Usage: " << av[0] << " <positive integer>" << std::endl;
		return 1;
	}

	PmergeMe sorter;
	sorter.performAction(ac, av);
	return 0;
}