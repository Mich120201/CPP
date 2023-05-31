/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:03:56 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 10:07:03 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _name(name), _weapon(weapon){
}

HumanA::~HumanA(){
}

void	HumanA::attack() const{
	std::cout << this->_name << " attack with their "
		<< this->_weapon.getType() << "!" << std::endl;
}
