/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:58:37 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 13:58:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy() :
		AForm("Robotomy", 72, 45), _target("Robotomy") {}

Robotomy::Robotomy(const std::string& target) :
		AForm("Robotomy_" + target, 72, 45), _target(target) {}

Robotomy::Robotomy(const Robotomy& other) :
		AForm(other), _target(other._target) {}

Robotomy& Robotomy::operator=(const Robotomy& other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

Robotomy::~Robotomy() {}

void	Robotomy::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::NotSignedException();
	static int	i = 0;
	if (i % 2 == 0)
		std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << executor.getName() << ": robotomy failed.." << std::endl;
	i++;
}
