/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:24:50 by mich              #+#    #+#             */
/*   Updated: 2023/06/08 10:27:00 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamonTrap.hpp"

int main() {

    std::cout << "IT'S CLAPTRAP TIME!!" << std::endl;
    std::cout << std::endl;

    {
        ClapTrap claptrap("Claptrap1");
        claptrap.attack("Enemy1");
        claptrap.takeDamage(5);
        claptrap.beRepaired(3);
    }

   std::cout << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "IT'S SCAVTRAP TIME!!" << std::endl;
    std::cout << std::endl;

    {
        ScavTrap scavtrap("Scavtrap1");
        scavtrap.attack("Enemy2");
        scavtrap.takeDamage(10);
        scavtrap.beRepaired(2);
        scavtrap.guardGate();
    }

    std::cout << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "IT'S FRAGTRAP TIME!!" << std::endl;
    std::cout << std::endl;

    {
        FragTrap fragtrap("FragTrap1");
        fragtrap.attack("enemy3");
        fragtrap.takeDamage(15);
        fragtrap.beRepaired(4);
        fragtrap.highFivesGuys();
    }

    std::cout << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "IT'S DIAMONTRAP TIME!!" << std::endl;
    std::cout << std::endl;

    {
        DiamondTrap diamondTrap("DiamondTrap1");
        diamondTrap.attack("Enemy1");
        diamondTrap.takeDamage(10);
        diamondTrap.beRepaired(5);
        diamondTrap.guardGate();
        diamondTrap.highFivesGuys();
        diamondTrap.whoAmI();
    }

    return 0;
}
