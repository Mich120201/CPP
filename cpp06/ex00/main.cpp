/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:23:38 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:23:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#define ERROR "\033[1;31mUsage: ./convert + char || int || float || double\033[0m"

int main(int argc, char** argv) {
	// Check for too many arguments
	if (argc != 2) {
		std::cout << ERROR << std::endl;
		return(1);
	}

	// Check if input matches special cases: nan, nanf, +inf, -inf, +inff, -inff
	std::string input = argv[1];
	for(int i = 0; i < 6; i++) {
		if (input == special[i]) {
			ScalarConverter::convert(input);
			return(0);
		}
	}

	// Check if input is a string and not a single character
	int dot = 0;
	int ef = 0;
	if (input.length() > 1) {
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '.'){
				dot++;
			} else if (input[i] == 'f') {
				ef++;
			} else if (!std::isdigit(input[i]) || dot > 1 || ef > 1) {
				std::cout << ERROR << std::endl;
				return(1);
			}
		}
		if (dot > 1 || ef > 1) {
			std::cout << ERROR << std::endl;
			return(1);
		}
	}

	// Convert the input
	ScalarConverter::convert(input);

	return 0;
}
