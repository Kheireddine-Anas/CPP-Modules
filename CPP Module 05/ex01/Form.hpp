/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:29:09 by akheired          #+#    #+#             */
/*   Updated: 2025/01/12 13:54:18 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSignin;
		const int gradeToExecute;

	public:
		Form();
		Form( const Form& other );
		Form& operator=( const Form& other );
		~Form();
		Form(const std::string name, int gradeToSign, int gradeToExecute );

		const std::string getName() const;
		bool isItSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned( const Bureaucrat& br );

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Form& a);

#endif