/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:10:55 by mich              #+#    #+#             */
/*   Updated: 2023/06/13 14:11:29 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	protected:
		std::string		_ideas[100];

	public:
		Brain();
		Brain( const Brain &other );
		~Brain();
		Brain &operator=( const Brain &other );

};

#endif
