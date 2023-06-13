/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:36:22 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:08:16 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat: " << _type << " constructor called " << std::endl;
}


WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat: " << _type << " copy costructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: " << _type << " desctructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat: " << _type << " copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat: " << _type << ": Miaawww!!!" << std::endl;
}
