/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:22:20 by mich              #+#    #+#             */
/*   Updated: 2023/06/05 14:43:00 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_number(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructore called" << std::endl;
	this->setRawBits(other.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &other)
		this->_fixed_point_number = other.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawsBits memeber funcition called" << std::endl;
	return this->_fixed_point_number;
}

void	Fixed::setRawBits(int const raw){
	this->_fixed_point_number = raw;
}
