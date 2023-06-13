/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:05:10 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:18:27 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog( const Dog &other );
		~Dog();
		Dog &operator=( const Dog &other );
		
		virtual void	makeSound() const;
};

#endif
