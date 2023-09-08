/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:57:20 by marvin            #+#    #+#             */
/*   Updated: 2023/08/30 13:57:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

President::President() :
		AForm("President", 25, 5), _target("President") {}

President::President(const std::string& target) :
		AForm("President_" + target, 25, 5), _target(target) {}

President::President(const President& other) :
		AForm(other), _target(other._target) {}

President& President::operator=(const President& other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

President::~President() {}

void President::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!this->getSigned())
		throw AForm::NotSignedException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
