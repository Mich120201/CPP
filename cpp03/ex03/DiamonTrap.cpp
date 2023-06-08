/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:32:04 by mich              #+#    #+#             */
/*   Updated: 2023/06/08 10:47:49 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->_name = "DiamonTrap";
	this->ClapTrap::_name = std::string("DiamonTrap").append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << name << " is assembled!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other){
	*this = other;
	std::cout << "DiamonTrap " << this->_name << " copied!" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamonTrap " << _name << " is diamanted!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	std::cout << "DiamonTrap " << _name << " assigned!"<< std::endl;
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
