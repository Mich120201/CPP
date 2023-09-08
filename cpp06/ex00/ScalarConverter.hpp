/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:31:18 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:31:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <cmath>

extern std::string special[6];

class ScalarConverter {
	private:
		static void char_converter( const std::string& input );
		static void number_converter( const std::string& input );

	public:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		~ScalarConverter();
		ScalarConverter& operator=( const ScalarConverter& other );

		static void convert( const std::string& input );

};


#endif
