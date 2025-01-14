/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:30:12 by akheired          #+#    #+#             */
/*   Updated: 2025/01/14 13:39:52 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {

        Bureaucrat Bur("Ma9La", 1);

        Intern someRandomIntern;
        AForm* form1 = someRandomIntern.makeForm("shrubbery creation", "Garden");
        AForm* form2 = someRandomIntern.makeForm("robotomy request", "Robot");
        AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Alice");

        if (form1) {
            std::cout << *form1 << std::endl;
            Bur.signForm(*form1);
            Bur.executeForm(*form1);
            std::cout << "\033[31m" << *form1 << "\033[0m" << std::endl;
            delete form1;
        }

        std::cout << "**********************************" << std::endl;

        if (form2) {
            std::cout << *form2 << std::endl;
            Bur.signForm(*form2);
            Bur.executeForm(*form2);
            std::cout << "\033[31m" << *form2 << "\033[0m" << std::endl;
            delete form2;
        }

        std::cout << "**********************************" << std::endl;
        
        if (form3) {
            std::cout << *form3 << std::endl;
            Bur.signForm(*form3);
            Bur.executeForm(*form3);
            std::cout << "\033[31m" << *form3 << "\033[0m" << std::endl;
            delete form3;
        }

        std::cout << "**********************************" << std::endl;

        try {
            // Attempt to create an invalid form
            AForm* invalidForm = someRandomIntern.makeForm("invalid form", "Nothing");
            if (invalidForm) {
                delete invalidForm;
            }
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
