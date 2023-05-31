/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:50:54 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 10:00:15 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie	*zombiehorde = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		zombiehorde[i].setname(name);
		zombiehorde[i].announce();
	}
	return (zombiehorde);
}
