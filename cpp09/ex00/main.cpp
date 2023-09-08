/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:39:42 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:39:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "\033[0;31mError: No file specified\033[0m" << std::endl;
		return 1;
	}
	Bitcoin bit;
	return bit.bitExchange(argv[1]);
}
