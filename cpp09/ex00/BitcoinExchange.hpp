/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:39:23 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:39:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGER_HPP
# define BITCOINEXCHANGER_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <algorithm>
# include <sstream>
# include <cmath>

class Bitcoin {
	private:
		std::map<std::string, float> _data;

		void	check_convert(std::string line);
		bool	check_data(std::string data);
		bool	check_time(std::string data);
		bool	check_value(std::string value);

	public:
		Bitcoin();
		Bitcoin( const Bitcoin& other );
		Bitcoin& operator=( const Bitcoin& other );
		~Bitcoin();

		int	bitExchange( char* argv );
};

#endif
