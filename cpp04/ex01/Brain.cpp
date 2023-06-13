/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:11:14 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:11:19 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy costructor called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}
