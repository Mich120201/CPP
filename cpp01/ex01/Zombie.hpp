/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:50:31 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 09:53:54 by mich             ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif
