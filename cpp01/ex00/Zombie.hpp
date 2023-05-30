/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:48:48 by mich              #+#    #+#             */
/*   Updated: 2023/05/30 14:54:49 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void		setname(std::string name);
		void		announce( void );
		std::string	getname() const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
