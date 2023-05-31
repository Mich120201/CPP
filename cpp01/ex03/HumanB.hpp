/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:04:30 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 10:09:04 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB{
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		HumanB(const std::string &name);
		~HumanB();
		void	setWeapon(Weapon &newWeapon);
		void	attack() const;
};

#endif
