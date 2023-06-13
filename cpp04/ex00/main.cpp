/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:36:55 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:04:57 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[32m" << "\nCreating Animal Classes" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;

	std::cout << "\033[32m" << "\nDisplaing varius type" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;

	std::cout << "\033[32m" << "\nMaking sounds" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrong_animal->makeSound();
	wrong_cat->makeSound();
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;

	std::cout << "\033[32m" << "\nDeleting Animal Classes" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	delete(meta);
	delete(i);
	delete(j);
	delete(wrong_animal);
	delete(wrong_cat);
	std::cout << "\033[32m" << "--------------------------------------" << "\033[0m" << std::endl;
	return 0;
}
