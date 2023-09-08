/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:42:23 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 11:42:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        this->_grade = other.getGrade();
    }
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int			Bureaucrat::getGrade() const {
	return this->_grade;
}

void		Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucra) {
	out << bureaucra.getName() << ", bureaucrat grade " << bureaucra.getGrade();
	return out;
}
