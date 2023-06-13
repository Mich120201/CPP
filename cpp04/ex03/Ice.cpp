/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:49:51 by kzak              #+#    #+#             */
/*   Updated: 2023/06/13 14:41:34 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const &other) : AMateria("ice") {
	*this = other;
}

Ice::~Ice() {
}

Ice	&Ice::operator=(const Ice &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter &target ) {
	std::cout << "\033[1;31m" << "* shoots an ice bolt at " << target.getName() << " *" << "\033[0m" << std::endl;
}
