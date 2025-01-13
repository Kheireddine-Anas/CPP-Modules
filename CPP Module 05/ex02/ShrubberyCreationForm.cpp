/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:44:56 by akheired          #+#    #+#             */
/*   Updated: 2025/01/13 15:42:56 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :  AForm("ShrubberyCreationForm", 145, 137) ,target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : AForm(other), target(other.target) {}


ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	if (this != &other) {
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "Destructor called for ShrubberyCreationForm!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : AForm("ShrubberyCreationForm", 145, 137) {}

void ShrubberyCreationForm::action() const {
	std::ofstream ofs(target + "_shruberry");
	if (!ofs) {
		throw NotOpen();
	}
	
	ofs <<
        "               ,@@@@@@@,\n"
        "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
        "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
        "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
        "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
        "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
        "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
        "       |o|        | |         | |\n"
        "       |.|        | |         | |\n"
        "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	ofs.close();
	std::cout << "Shrubbery file created at " << target << "_shrubbery" << std::endl;
}