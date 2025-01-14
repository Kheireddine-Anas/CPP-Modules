/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:29:49 by akheired          #+#    #+#             */
/*   Updated: 2025/01/14 11:21:04 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSignin;
		const int gradeToExecute;

	public:
		AForm();
		AForm( const AForm& other );
		AForm& operator=( const AForm& other );
		virtual ~AForm();
		AForm(const std::string name, int gradeToSign, int gradeToExecute );

		const std::string getName() const;
		bool isItSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned( const Bureaucrat& br );
		void execute( Bureaucrat const& executor ) const;

		virtual void action() const = 0;

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class NotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
		class NotOpen : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const AForm& a);

#endif