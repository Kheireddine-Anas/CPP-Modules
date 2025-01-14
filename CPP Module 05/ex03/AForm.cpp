/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:29:43 by akheired          #+#    #+#             */
/*   Updated: 2025/01/14 09:29:46 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "AForm.hpp"

AForm::AForm() :  name("Unamed"), isSigned(false), gradeToSignin(13), gradeToExecute(37) {}

AForm::AForm( const AForm& other ) : name(other.name), isSigned(other.isSigned), gradeToSignin(other.gradeToExecute), gradeToExecute(other.gradeToExecute) {}


AForm& AForm::operator=( const AForm& other ) {
	if (this != &other) {
		isSigned = other.isSigned;
	}
	return *this;
}

AForm::~AForm() {
	// std::cout << "Destructor called for AForm!" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute ) : name(name), gradeToSignin(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150) {
		throw GradeTooLowException();
	}
}

const std::string AForm::getName() const {
	return this->name;
}

bool AForm::isItSigned() const {
	return isSigned;
}

int AForm::getGradeToSign() const {
	return gradeToSignin;
}

int AForm::getGradeToExecute() const {
	return gradeToExecute;
}

void AForm::beSigned( const Bureaucrat& br ) {
	if (br.getGrade() > gradeToSignin) {
		throw GradeTooLowException();
	}
	isSigned = true;
}

void AForm::execute( Bureaucrat const& executor) const {
	if (!isSigned) {
		throw NotSignedException();
	}
	if (executor.getGrade() > gradeToExecute) {
		throw GradeTooLowException();
	}
	action();
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

const char* AForm::NotSignedException::what() const throw() {
	return "Form is not signed";
}

const char* AForm::NotOpen::what() const throw() {
	return "Failed to create the file!";
}

std::ostream& operator<<(std::ostream& out, const AForm& a) {
	out << "Form : \"" << a.getName() << "\", Grade To Sign : " << a.getGradeToSign() << ", Grade To Execute : " << a.getGradeToExecute() 
	<< ", Signed : " << (a.isItSigned() ? "YES" : "NO");
	return out;
}
