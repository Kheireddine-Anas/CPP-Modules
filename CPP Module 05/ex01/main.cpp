/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:02:29 by akheired          #+#    #+#             */
/*   Updated: 2025/01/12 17:43:44 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat ma9la("MA9LA", 5);
		// std::cout << ma9la << std::endl;
		// ma9la.IncGrade();
		// std::cout << ma9la << std::endl;
		// ma9la.DecGrade();
		std::cout << ma9la << std::endl;
		
		// std::cout << ma9la.getName() << " : " << ma9la.getGrade() << std::endl;
		Form ad("Bill", 3, 50);
		std::cout << ad << std::endl;
		// std::cout << ad.getName() << " : " << ad.getGradeToSign() << " : " << ad.getGradeToExecute() << std::endl;
		// ad.beSigned(ma9la);
		std::cout << ">>" << ad << std::endl;
		std::cout << "==================================" << std::endl;
		ma9la.signForm(ad);
	}
	catch ( std::exception& ex ) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}