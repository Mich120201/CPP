/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:59:12 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 13:59:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class Robotomy : public AForm {
	private:
		std::string	_target;

	public:
		Robotomy();
		Robotomy( const std::string& target );
		Robotomy( const Robotomy& other );
		virtual ~Robotomy();
		Robotomy& operator=( const Robotomy& other);

		virtual void	execute( Bureaucrat const& executor ) const;
};

#endif
