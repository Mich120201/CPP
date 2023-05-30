/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:58:49 by mich              #+#    #+#             */
/*   Updated: 2023/05/30 15:01:13 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie	zombie1;
	zombie1.setname("Kevin");
	zombie1.announce();
	
	Zombie	*zombie2 = newZombie("Giulio");
	delete	zombie2;

	randomChump("Andrea");

	return 0;
}
