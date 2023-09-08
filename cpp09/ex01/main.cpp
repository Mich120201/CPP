/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:39:55 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:39:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "\033[0;31mError: ./RPN + Polish mathematical expression\033[0m" << std::endl;
		return 1;
	}

	std::string expression = argv[1];

	try {
		RPN calculator;
		int result = calculator.calc(expression);
		std::cout << result << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "\033[0;31mError: " << e.what() << "\033[0m" << std::endl;
		return 1;
	}
	return 0;
}
