/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:09:13 by mich              #+#    #+#             */
/*   Updated: 2023/06/06 15:11:07 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(){
	Point a(0.0, 0.0);
	Point b(1.0, 0.0);
	Point c(0.0, 1.0);
	Point p1(0.4, 0.4);
	Point p2(2.0, 2.0);

	std::cout << "Is point p1 inside the triangle? " << bsp(a, b, c, p1) << std::endl;
	std::cout << "Is point p2 inside the triangle? " << bsp(a, b, c, p2) << std::endl;

	return 0;
}
