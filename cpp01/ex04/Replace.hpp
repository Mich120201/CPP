/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:41 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 15:20:50 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>

class Replace{
	private:
		std::string	_file;
		std::string	_fstStr;
		std::string	_sndStr;
		std::string	_fileBackup;
	public:
		Replace(std::string file, std::string ftsStr, std::string sndStr, std::string fileBackup);
		~Replace();
		std::string	get_file() const;
		std::string	get_fstStr() const;
		std::string	get_sndStr() const;
		std::string	get_fileBackup() const;
};

#endif
