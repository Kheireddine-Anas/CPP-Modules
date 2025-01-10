/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:02:29 by akheired          #+#    #+#             */
/*   Updated: 2025/01/10 18:24:10 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat ma9la("MA9LA", 110);
		std::cout << ma9la << std::endl;
		ma9la.IncGrade();
		ma9la.IncGrade();
		std::cout << ma9la << std::endl;
		ma9la.DecGrade();
		ma9la.DecGrade();
		ma9la.DecGrade();
		ma9la.DecGrade();
		std::cout << ma9la << std::endl;
		// std::cout << ma9la.getName() << " : " << ma9la.getGrade() << std::endl;
		
	}
	catch ( std::exception& ex ) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}