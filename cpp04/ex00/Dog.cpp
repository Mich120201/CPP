/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:16:34 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:25:26 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog   : " << _type << " constructor called " << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog   : " << _type << " copy costructor called" << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "Dog   : " << _type << " desctructor called" << std::endl;
	delete(_brain);
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog   : " << _type << " copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Dog   : " << _type << ": Baauuuu Baauuu!!!" << std::endl;
}
