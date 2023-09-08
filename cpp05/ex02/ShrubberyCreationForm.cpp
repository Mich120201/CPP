/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:59:43 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 13:59:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery() :
		AForm("Shrubbery", 145, 137), _target("Shrubbery") {}

Shrubbery::Shrubbery(const std::string& target) :
		AForm("Shrubbery_" + target, 145, 137), _target(target) {}

Shrubbery::Shrubbery(const Shrubbery& other) :
		AForm(other), _target(other._target) {}

Shrubbery& Shrubbery::operator=(const Shrubbery& other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

Shrubbery::~Shrubbery() {}

void Shrubbery::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::NotSignedException();
	std::ofstream file(this->_target + "_shrubbery");
	if (!file) {
		std::cerr << "Failed to open file " << _target << "_shrubbery" << std::endl;
		return ;
	}
	file << "              ,@@@@@@@,\n"
		 << "      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		 << "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		 << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		 << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		 << "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		 << "  `&%\\ ` /%&'    |.|        \\ '|8'\n"
		 << "      |o|        | |         | |\n"
		 << "      |.|        | |         | |\n"
		 << "   \\\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
	file.close();
	std::cout << "ShrubberyCreationForm has been executed by " << executor.getName() << std::endl;
}
