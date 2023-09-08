/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:32:52 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:32:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data {
	private:
		int _value;

	public:
		Data();
		Data( int value );
		Data( const Data& other );
		~Data();
		Data& operator=( const Data& other );

		int getValue() const;
};

#endif
