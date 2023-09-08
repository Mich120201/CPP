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
#include "Form.hpp"

int	main() {
	std::cout << "\n-----Wrong form-----" << std::endl;
	try {
		Form wrong("Test", 0, 150);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n-----Form, bureaucrat with grade to low-----" << std::endl;
	try {
		Bureaucrat b1("Pippo", 51);
		Form f1("A1", 50, 50);
		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		b1.signForm(f1);
			} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n-----Form double with signed-----" << std::endl;
	try {
		Bureaucrat b2("Jino", 150);
		Form f2("B1", 150, 150);
		std::cout << b2 << std::endl;
		std::cout << f2 << std::endl;
		b2.signForm(f2);
		b2.signForm(f2);
			} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
