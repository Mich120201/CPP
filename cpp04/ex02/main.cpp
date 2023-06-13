/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:36:55 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:33:35 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[32m" << "\nCreating Animal Classes" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	Animal *cat_dog[6];
	for (int i = 0; i < 6; i++) {
		if (i % 2){
			cat_dog[i] = new Cat();
		}
		else {
			cat_dog[i] = new Dog();
		}
	}

	std::cout << "\033[32m" << "\nMaking sounds" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	for (int i = 0; i < 6; i++)
		cat_dog[i]->makeSound();

	std::cout << "\033[32m" << "\nDeleting Animal Classes" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	for (int i = 0; i < 6; i++)
		delete(cat_dog[i]);

	return(0);
}
