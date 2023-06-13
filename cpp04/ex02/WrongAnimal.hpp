/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAninal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:06:49 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:06:50 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	protected:
		std::string		_type;

	public:
		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &other );
		~WrongAnimal();
		WrongAnimal &operator=( const WrongAnimal &other );

		void	makeSound() const;
		std::string getType() const;
};

#endif
