/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:29:23 by mich              #+#    #+#             */
/*   Updated: 2023/06/08 10:48:48 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(100), _energyPoints(50), _attackDamage(20) {}

ClapTrap::ClapTrap(std::string name) :
	_name (name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "A new ClapTrap named " << _name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "The ClapTrap named " << _name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
	std::cout << "ClapTrap " << _name << " copied!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other){
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " assigned!" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_energyPoints < 1){
		std::cout << _name << ">> ClapTrap " << _name << " has no energy to attack!" << std::endl;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints < amount) {
		std::cout << ">> ClapTrap " << _name << " has been defeated!" << std::endl;
		_hitPoints = 0;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage. Remaining hit points: " << _hitPoints << std::endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints < 1) {
		std::cout << "ClapTrap " << _name << " has no energy left to be repaired!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << "if repaired for "<< amount << " hits point" << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}
