/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:07:17 by mich              #+#    #+#             */
/*   Updated: 2023/05/30 14:07:52 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;

	public:
		Contact();
		~Contact();

		void	setfirstname(std::string firstname);
		void	setlastname(std::string lastname);
		void	setnickname(std::string nickname);
		void	setphonenumber(std::string phonenumber);
		void	setdarkestsecret(std::string darkestsecret);

		std::string	getfirstname() const;
		std::string	getlastname() const;
		std::string	getnickname() const;
		std::string	getphonenumber() const;
		std::string	getdarkestsecret() const;
};

#endif
