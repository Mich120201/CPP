/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:33:10 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:33:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main() {
	Data data(42);
	uintptr_t serialized = Serializer::serialize(&data);
	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Original value: " << data.getValue() << std::endl;
	std::cout << "Deserialized value: " << deserialized->getValue() << std::endl;

	if (&data == deserialized) {
		std::cout << "\033[1;32mPointers match!\033[0m" << std::endl;
	} else {
		std::cout << "\033[1;31mPointers do not match!\033[0m" << std::endl;
	}

	Data newData(42);
	uintptr_t newSerialized = Serializer::serialize(&newData);
	Data* newDeserialized = Serializer::deserialize(newSerialized);

	std::cout << "Original value: " << newData.getValue() << std::endl;
	std::cout << "Deserialized value: " << newDeserialized->getValue() << std::endl;

	if (&newData == deserialized) {
		std::cout << "\033[1;32mPointers match!\033[0m" << std::endl;
	} else {
		std::cout << "\033[1;31mPointers do not match!\033[0m" << std::endl;
	}

	return 0;
}
