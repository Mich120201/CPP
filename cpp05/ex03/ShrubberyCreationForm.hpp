/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:01:03 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 14:01:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class Shrubbery : public AForm {
	private:
		std::string	_target;

	public:
		Shrubbery();
		Shrubbery( const std::string& target );
		Shrubbery( const Shrubbery& other );
		virtual ~Shrubbery();
		Shrubbery& operator=( const Shrubbery& other );

		virtual void	execute( Bureaucrat const& executor ) const;
};

#endif
