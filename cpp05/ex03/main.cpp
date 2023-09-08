/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:05:36 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:05:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {

	try{
		Intern someRandomIntern;
		AForm* rrf;
		AForm* prf;
		AForm* wrong;
		Bureaucrat b1("Lorenzo", 1);

		std::cout << "\n-----Initial state of the form and bureaucrats-----" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		prf = someRandomIntern.makeForm("presidential request", "P1");
		wrong = someRandomIntern.makeForm("wrong request", "W1");
		std::cout << b1 << std::endl;

		std::cout << "\n-----Bureaucrat signs and execute the forms-----" << std::endl;
		b1.signForm(*rrf);
		b1.executeForm(*rrf);
		b1.signForm(*prf);
		b1.executeForm(*prf);
		delete rrf;
		delete prf;
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
