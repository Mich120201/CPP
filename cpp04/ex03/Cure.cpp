/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:45:33 by kzak              #+#    #+#             */
/*   Updated: 2023/06/13 14:42:14 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const &src) : AMateria("cure") {
	*this = src;
}

Cure	&Cure::operator=(const Cure &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

Cure::~Cure() {
}

AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter &target ) {
	std::cout << "\033[34m" << "* heals " << target.getName() << "'s wounds *" << "\033[0m" << std::endl;
}
