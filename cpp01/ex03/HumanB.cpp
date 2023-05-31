/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:04:34 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 10:08:49 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(nullptr){
}

HumanB::~HumanB(){
}

void	HumanB::setWeapon(Weapon &newWeapon){
	this->_weapon = &newWeapon;
}

void	HumanB::attack() const{
	if (this->_weapon == nullptr){
		std::cout << this->_name << " doesn't have a weapon."
			<< std::endl;
		return;
	}
	std::cout << this->_name << " attack with their "
		<< this->_weapon->getType() << "!" << std::endl;
}
