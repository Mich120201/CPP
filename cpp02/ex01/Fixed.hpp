/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:49:26 by mich              #+#    #+#             */
/*   Updated: 2023/06/05 14:56:13 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
		int					_fixed_point_number;
		static const int	_kFractionalBits = 8;

	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif
