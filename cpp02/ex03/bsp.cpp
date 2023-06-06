/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:09:53 by mich              #+#    #+#             */
/*   Updated: 2023/06/06 15:09:55 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c) {
	Fixed x1 = a.getX() - c.getX();
	Fixed y1 = a.getY() - c.getY();
	Fixed x2 = b.getX() - c.getX();
	Fixed y2 = b.getY() - c.getY();
	return x1 * y2 - x2 * y1;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea = area(a, b, c);
	Fixed pabArea = area(point, a, b);
	Fixed pbcArea = area(point, b, c);
	Fixed pcaArea = area(point, c, a);

	return (abcArea > 0 && pabArea > 0 && pbcArea > 0 && pcaArea > 0)
		|| (abcArea < 0 && pabArea < 0 && pbcArea < 0 && pcaArea < 0);
}
