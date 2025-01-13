/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:48:54 by akheired          #+#    #+#             */
/*   Updated: 2025/01/13 20:36:24 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        // Bureaucrats
        Bureaucrat highRanker("Alice", 1);
        Bureaucrat lowRanker("Bob", 140);

        // Forms
        ShrubberyCreationForm shrubbery("Home");
        RobotomyRequestForm robotomy("Target");
        PresidentialPardonForm pardon("Eve");

        // Test signing and execution
        std::cout << "\n--- ShrubberyCreationForm ---\n";
        lowRanker.signForm(shrubbery); // LowRanker should sign successfully
        lowRanker.executeForm(shrubbery); // Should fail due to low execution grade
        highRanker.executeForm(shrubbery); // Should succeed

        std::cout << "\n--- RobotomyRequestForm ---\n";
        highRanker.signForm(robotomy); // HighRanker signs successfully
        highRanker.executeForm(robotomy); // 50% chance to succeed

        std::cout << "\n--- PresidentialPardonForm ---\n";
        highRanker.signForm(pardon); // HighRanker signs successfully
        highRanker.executeForm(pardon); // Should succeed

        // Test error handling
        std::cout << "\n--- Error Handling ---\n";
        try {
            lowRanker.signForm(pardon); // Should fail to sign due to low rank
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            lowRanker.executeForm(pardon); // Should fail to execute due to low rank
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

    return 0;
}
