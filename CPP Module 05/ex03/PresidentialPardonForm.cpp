/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:30:28 by akheired          #+#    #+#             */
/*   Updated: 2025/01/14 11:16:37 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :  AForm("PresidentialPardonForm", 25, 5) ,target("Default") {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : AForm(other), target(other.target) {}


PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
	if (this != &other) {
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "Destructor called for PresidentialPardonForm!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string target ) : AForm("PresidentialPardonForm", 25, 5), target(target) {}

void PresidentialPardonForm::action() const {
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

AForm* PresidentialPardonForm::create( const std::string& target ) {
	return new PresidentialPardonForm(target);
}