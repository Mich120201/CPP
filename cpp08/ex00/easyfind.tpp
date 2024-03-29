/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:36:47 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:36:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template<typename T>
bool	easyfind(const T& container, int toFind) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);
	return it != container.end();
}

const char* NoOccurrenceException::what() const throw() {
	return "\033[0;31mNo occurrence found\033[0m";
}

const char* FoundException::what() const throw() {
	return "\033[0;32mNumber found!\033[0m";
}

#endif
