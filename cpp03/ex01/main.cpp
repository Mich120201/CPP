/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:24:50 by mich              #+#    #+#             */
/*   Updated: 2023/06/07 15:16:54 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    {
        ClapTrap claptrap("Claptrap1");
        claptrap.attack("Enemy1");
        claptrap.takeDamage(5);
        claptrap.beRepaired(3);
    }

    std::cout << "-----" << std::endl;

    {
        ScavTrap scavtrap("Scavtrap1");
        scavtrap.attack("Enemy2");
        scavtrap.takeDamage(10);
        scavtrap.beRepaired(2);
        scavtrap.guardGate();
    }

    return 0;
}
