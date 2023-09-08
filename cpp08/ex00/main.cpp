/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:36:54 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:36:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	// LIST
	std::list<int>	lst;

	for(int i = 0; i < 10; i++) {
		lst.push_back(i + 1);
	}

	std::cout << "\nTesting list with a number in the list" << std::endl;
	try {
		if (::easyfind(lst, 1))
			throw FoundException();
		else
			throw NoOccurrenceException();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	//VECTOR
	std::vector<int> vec;

	for(int i = 0; i < 10; i++) {
		vec.push_back(i + 1);
	}

	std::cout << "\nTesting vector with a wrong number" << std::endl;
	try {
		if (::easyfind(vec, 11))
			throw FoundException();
		else 
			throw NoOccurrenceException();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
