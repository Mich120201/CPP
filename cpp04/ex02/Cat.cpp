/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:16:37 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:22:10 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat   : " << _type << " constructor called " <<std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat   : " << _type << " copy costructor called" << std::endl;
	*this = other;
}

Cat::~Cat() {
	std::cout << "Cat   : " << _type << " desctructor called" << std::endl;
	delete(_brain);
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat   : " << _type << " copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Cat   : " << _type << ": Miaawww!!!" << std::endl;
}
