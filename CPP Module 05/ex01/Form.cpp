/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:29:23 by akheired          #+#    #+#             */
/*   Updated: 2025/01/12 17:12:56 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :  name("Unamed"), isSigned(false), gradeToSignin(13), gradeToExecute(37) {}

Form::Form( const Form& other ) : name(other.name), isSigned(other.isSigned), gradeToSignin(other.gradeToExecute), gradeToExecute(other.gradeToExecute) {}


Form& Form::operator=( const Form& other ) {
	if (this != &other) {
		isSigned = other.isSigned;
	}
	return *this;
}

Form::~Form() {
	std::cout << "Destructor called for Form!" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute ) : name(name), gradeToSignin(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150) {
		throw GradeTooLowException();
	}
}

const std::string Form::getName() const {
	return this->name;
}

bool Form::isItSigned() const {
	return isSigned;
}

int Form::getGradeToSign() const {
	return gradeToSignin;
}

int Form::getGradeToExecute() const {
	return gradeToExecute;
}

void Form::beSigned( const Bureaucrat& br ) {
	if (br.getGrade() > gradeToSignin) {
		throw GradeTooLowException();
	}
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& out, const Form& a) {
	out << "Form : \"" << a.getName() << "\", Grade To Sign : " << a.getGradeToSign() << ", Grade To Execute : " << a.getGradeToExecute() 
	<< ", Signed : " << (a.isItSigned() ? "YES" : "NO");
	return out;
}
