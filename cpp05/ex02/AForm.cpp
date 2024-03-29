/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:33:25 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 13:33:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :
		_name("1A"), _signed(false), _gradeToSign(150),
		_gradeToExecute(150) {
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) :
		_name(name), _signed(false), _gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute) {
	if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw GradeTooHighException();
	else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other) :
		_name(other._name), _signed(other._signed),
		_gradeToSign(other._gradeToSign),
		_gradeToExecute(other._gradeToExecute) {
}

AForm::~AForm() {
}

AForm&		AForm::operator=(const AForm& other) {
	if (this != &other) {
		this->_signed = other.getSigned();
	}
	return *this;
}

std::string	AForm::getName() const {
	return this->_name;
}

bool		AForm::getSigned() const {
	return this->_signed;
}

int			AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int			AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void		AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

const char*	AForm::GradeTooHighException::what() const throw() {
	return "Form: grade is too high";
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return "Form: grade is too low";
}

const char* AForm::NotSignedException::what() const throw() {
	return "Form: this form is not signed";
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
	out << form.getName() << ", is signed? " << form.getSigned()
		<< "\nGrade to signed required " << form.getGradeToSign()
		<< "\nGrade to execute required " << form.getGradeToExecute();
	return out;
}
