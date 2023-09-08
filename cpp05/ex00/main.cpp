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

int	main() {
	std::cout << "\n-----Bureaucrat with hight grade-----" << std::endl;
	try {
		Bureaucrat b1("Jino", 1);
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b1.incrementGrade();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n-----Bureaucrat with low grade-----" << std::endl;
	try {
		Bureaucrat b2("Pippo", 150);
		std::cout << b2 << std::endl;
		b2.incrementGrade();
		std::cout << b2 << std::endl;
		b2.decrementGrade();
		std::cout << b2 << std::endl;
		b2.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
