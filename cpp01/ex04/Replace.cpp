/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:38:50 by mich              #+#    #+#             */
/*   Updated: 2023/05/31 15:23:57 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string file, std::string ftsStr, std::string sndStr, std::string fileBackup) :
_file(file), _fstStr(ftsStr), _sndStr(sndStr), _fileBackup(fileBackup){
}

Replace::~Replace(){
}

std::string	Replace::get_file() const{
	return this->_file;
}

std::string	Replace::get_fstStr() const{
	return this->_fstStr;
}

std::string	Replace::get_sndStr() const{
	return this->_sndStr;
}

std::string	Replace::get_fileBackup() const{
	return this->_fileBackup;
}
