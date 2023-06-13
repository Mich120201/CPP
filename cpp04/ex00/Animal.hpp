/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:57:10 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 12:00:39 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	protected:
		std::string		_type;

	public:
		Animal();
		Animal( std::string type );
		Animal( const Animal &other );
		virtual ~Animal();
		Animal &operator=( const Animal &other );

		virtual void	makeSound() const;
		std::string getType() const;
};

#endif
