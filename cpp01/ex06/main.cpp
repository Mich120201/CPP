/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:16:37 by mich              #+#    #+#             */
/*   Updated: 2023/06/01 15:26:25 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Enter 1 parameter" << std::endl;
		return 0;
	}
	Harl	harl;
	
	harl.complain(argv[1]);
	return 0;
}
