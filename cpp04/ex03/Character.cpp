/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:35:45 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:36:40 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default") {}

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(Character const &other) : _name(other._name) {
	*this = other;
}

Character	&Character::operator=(Character const &other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return;
		}
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx]) {
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

std::string const	&Character::getName() const {
	return this->_name;
}
