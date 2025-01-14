/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:30:39 by akheired          #+#    #+#             */
/*   Updated: 2025/01/14 11:16:34 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :  AForm("RobotomyRequestForm", 72, 45) ,target("Default") {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ) : AForm(other), target(other.target) {}


RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	if (this != &other) {
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "Destructor called for RobotomyRequestForm!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) : AForm("RobotomyRequestForm", 72, 45), target(target) {}

void RobotomyRequestForm::action() const {
	std::srand(std::time(0));
	std::cout << "* Driling Noises *" << std::endl;
	if (std::rand() % 2){
		std::cout << target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << "Robotomy failed for " << target << "." << std::endl;
	}
}

AForm* RobotomyRequestForm::create( const std::string& target ) {
	return new RobotomyRequestForm(target);
}