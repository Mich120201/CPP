/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:39:38 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 12:39:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& other );
		virtual ~Bureaucrat();
		Bureaucrat&	operator=( const Bureaucrat& other );

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

		class GradeTooHighException : public std::exception {
			public :
				virtual const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<( std::ostream &out, const Bureaucrat &fixed );

#endif
