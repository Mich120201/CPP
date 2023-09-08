/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:32:25 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:32:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _value(0) {}

Data::Data(int value) : _value(value) {}

Data::Data(const Data& other) : _value(other._value) {}

Data::~Data() {}

Data& Data::operator=(const Data& other) {
	if (this != &other)
		this->_value = other.getValue();
	return *this;
}

int Data::getValue() const {
	return this->_value;
}
