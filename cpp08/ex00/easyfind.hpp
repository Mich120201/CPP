/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:36:39 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:36:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <map>
# include <vector>
# include <list>

template< typename T >
bool	easyfind(const T& container, int toFind);

class	NoOccurrenceException : public std::exception {
	public:
		virtual const char* what() const throw();
};

class	FoundException : public std::exception {
	public:
		virtual const char* what() const throw();
};

# include "easyfind.tpp"

#endif
