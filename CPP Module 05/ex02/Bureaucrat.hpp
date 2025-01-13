/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:49:21 by akheired          #+#    #+#             */
/*   Updated: 2025/01/13 16:35:25 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
	public:
		Bureaucrat();
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat& operator=( const Bureaucrat& other );
		~Bureaucrat();
		
		Bureaucrat( const std::string nm, int grd );
		const std::string getName() const;
		int getGrade() const;

		void IncGrade();
		void DecGrade();

		void signForm( AForm& f );
		void executeForm( const AForm& form );
};

std::ostream& operator<<( std::ostream& out, Bureaucrat& B );

#endif