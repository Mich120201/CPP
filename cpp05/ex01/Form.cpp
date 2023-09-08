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

#include "Form.hpp"

Form::Form() :
		_name("1A"), _signed(false), _gradeToSign(150),
		_gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
		_name(name), _signed(false), _gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute) {
	if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw GradeTooHighException();
	else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other) :
		_name(other._name), _signed(other._signed),
		_gradeToSign(other._gradeToSign),
		_gradeToExecute(other._gradeToExecute) {}

Form::~Form() {}

Form&		Form::operator=(const Form& other) {
	if (this != &other) {
		this->_signed = other.getSigned();
	}
	return *this;
}

std::string	Form::getName() const {
	return this->_name;
}

bool		Form::getSigned() const {
	return this->_signed;
}

int			Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int			Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void		Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "Form: grade is too high";
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "Form: grade is too low";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << ", is signed? " << form.getSigned()
		<< "\nGrade to signed required " << form.getGradeToSign()
		<< "\nGrade to execute required " << form.getGradeToExecute();
	return out;
}
