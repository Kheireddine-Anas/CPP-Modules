/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:43:24 by akheired          #+#    #+#             */
/*   Updated: 2025/01/14 13:35:18 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern& other ) {
	(void)other;
}

Intern& Intern::operator=( const Intern& other ) {
	(void)other;
	return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm( const std::string& formName, const std::string& target) {
	const std::string formsTypes[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	AForm* (*formCreator[])(const std::string&) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
	};

	for (int i = 0; i < 3; i++) {
		if (formName == formsTypes[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return formCreator[i](target);
		}
	}
	
	std::cout << "Form Name doesn't exist: '" << formName << "'" << std::endl;
	return NULL;
	
}