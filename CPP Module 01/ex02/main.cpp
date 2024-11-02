/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:59:22 by akheired          #+#    #+#             */
/*   Updated: 2024/11/02 09:59:23 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The Value of the  string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	
	return 0;
}