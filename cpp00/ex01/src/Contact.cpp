/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mich <mich@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:08:54 by mich              #+#    #+#             */
/*   Updated: 2023/05/30 14:11:41 by mich             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_file/Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void	Contact::setfirstname(std::string firstname){
	this->_firstname = firstname;
	return;
}

void	Contact::setlastname(std::string lastname){
	this->_lastname = lastname;
	return;
}

void	Contact::setnickname(std::string nickname){
	this->_nickname = nickname;
	return;
}

void	Contact::setphonenumber(std::string phonenumber){
	this->_phonenumber = phonenumber;
	return;
}

void	Contact::setdarkestsecret(std::string darkestsecret){
	this->_darkestsecret = darkestsecret;
	return;
}

std::string	Contact::getfirstname() const{
	return this->_firstname;
}

std::string	Contact::getlastname() const{
	return this->_lastname;
}

std::string	Contact::getnickname() const{
	return this->_nickname;
}

std::string	Contact::getphonenumber() const{
	return this->_phonenumber;
}

std::string	Contact::getdarkestsecret() const{
	return this->_darkestsecret;
}
