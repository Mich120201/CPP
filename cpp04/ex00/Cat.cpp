/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:16:37 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 12:38:52 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat : " << _type << " constructor called " << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Cat : " << _type << " copy constructor called " << std::endl;
	*this = other;
}

Cat::~Cat(){
	std::cout << "Cat : " << _type << " desctructor called " << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat : " << _type << " copy assigment operator called " << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Cat : " << _type << " MIAW MIAW!!!" << std::endl;
}
