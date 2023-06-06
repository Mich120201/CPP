/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:10:39 by mich              #+#    #+#             */
/*   Updated: 2023/06/06 15:11:04 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){
}

Point::Point(float const x, float const y) : _x(x), _y(y){
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY()){
}

Point::~Point(){
}

Point &Point::operator=(Point const & other){
	if (this != &other){
		const_cast<Fixed&>(_x) = other.getX();
		const_cast<Fixed&>(_y) = other.getY();
	}
	return *this;
}

Fixed const Point::getX() const{
	return this->_x;
}

Fixed const Point::getY() const{
	return this->_y;
}
