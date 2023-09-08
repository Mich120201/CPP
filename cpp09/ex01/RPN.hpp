/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:21 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:40:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stack>
# include <cstdlib>

class RPN {
	public:
		RPN();
		RPN( const RPN& other );
		RPN& operator=(const RPN& other);
		~RPN();

		int calc(const std::string& expression);
};

#endif // RPN_HPP
