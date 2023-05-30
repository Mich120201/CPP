/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:07:33 by mich              #+#    #+#             */
/*   Updated: 2023/05/30 14:08:10 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		oldest_index;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(const Contact &c);
		void	displayContacts();
		void	searchContact(int index);
		int		get_oldest_index() const;
};

#endif
