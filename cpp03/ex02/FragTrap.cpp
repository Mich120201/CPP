/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:49:12 by mich              #+#    #+#             */
/*   Updated: 2023/06/08 10:18:34 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is assembled!" << std::endl;
}


FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "FragTrap" << this->_name << " copied!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " is trapped!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap " << _name << " assigned!!" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
