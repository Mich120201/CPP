/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:58:14 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 13:58:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class President : public AForm {
	private:
		std::string	_target;

	public:
		President();
		President( const std::string& target );
		President( const President& other );
		virtual ~President();
		President& operator=( const President& other );

		virtual void	execute( Bureaucrat const& executor ) const;
};

#endif
