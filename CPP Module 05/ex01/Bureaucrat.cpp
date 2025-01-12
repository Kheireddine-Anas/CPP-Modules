/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:02:25 by akheired          #+#    #+#             */
/*   Updated: 2025/01/12 17:08:12 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(42) {
	std::cout << "Default " << this->name << " Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	std::cout << "Copy Assignement Operator called" << std::endl;
	if (this != &other) {
		grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called by: " << this->getName() << std::endl;
}

Bureaucrat::Bureaucrat( const std::string nm, int grd ) : name(nm), grade(grd) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
}

const std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::IncGrade() {
	grade--;
	if (grade < 1) {
		throw GradeTooHighException();
	}
	std::cout << this->getName() << " : Incremented to: " << getGrade() << std::endl;
}

void Bureaucrat::DecGrade() {
	grade++;
	if (grade > 150) {
		throw GradeTooLowException();
	}
	std::cout << this->getName() << " : Decremented to: " << getGrade() << std::endl;
}

void Bureaucrat::signForm( Form& f ){
	try {
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

std::ostream& operator<<( std::ostream& out, Bureaucrat& B ) {
	out << B.getName() << ", bureaucrat grade " << B.getGrade() << ".";
	return out;
}