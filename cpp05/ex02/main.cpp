/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:40:45 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 12:40:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	// Create bureaucrats
	Bureaucrat kevin("kevin", 45);
	Bureaucrat lorenzo("Lorenzo", 5);

	// Create forms
	Shrubbery shrubbery("garden");
	Robotomy robotomy("human");
	President pardon("criminal");

	std::cout << "\n-----Initial state of the form and bureaucrats-----" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;
	std::cout << kevin << std::endl;
	std::cout << lorenzo << std::endl;

	try {
		std::cout << "\n-----kevin tries to sign the forms-----" << std::endl;
		kevin.signForm(shrubbery);
		kevin.signForm(robotomy);
		kevin.signForm(pardon);

		std::cout << "\n-----Lorenzo signs the rest of the forms-----" << std::endl;
		lorenzo.signForm(shrubbery);
		lorenzo.signForm(robotomy);
		lorenzo.signForm(pardon);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-----Print the forms after being signed-----" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;

	try {
		std::cout << "\n-----kevin tries to execute the forms-----" << std::endl;
		kevin.executeForm(shrubbery);
		kevin.executeForm(robotomy);
		kevin.executeForm(pardon);

		std::cout << "\n-----Lorenzo executes the forms-----" << std::endl;
		lorenzo.executeForm(shrubbery);
		lorenzo.executeForm(robotomy);
		lorenzo.executeForm(pardon);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n-----Print the final state of the forms and bureaucrats-----" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;
	std::cout << lorenzo << std::endl;
	std::cout << kevin << std::endl;

	return 0;
}
