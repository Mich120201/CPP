/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:03:21 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 10:12:52 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type){
}

Weapon::~Weapon(){
}

const std::string &Weapon::getType() const{
	return this->_type;
}

void	Weapon::setType(const std::string &newType){
	this->_type = newType;
}
