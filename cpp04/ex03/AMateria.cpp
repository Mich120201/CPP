/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:35:05 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:35:35 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria") {
}


AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria() {
}

AMateria &AMateria::operator=(AMateria const &other) {
	if ( this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void	AMateria::use(ICharacter& other) {
}

AMateria	*AMateria::clone() const {
	return (AMateria*)this;
}

std::string const	&AMateria::getType() const {
	return (_type);
}
