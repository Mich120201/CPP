/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:33:45 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:33:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) {}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& other) {
	return *this;
}

uintptr_t Serializer::serialize(Data* prt) {
	return reinterpret_cast<uintptr_t>(prt);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
