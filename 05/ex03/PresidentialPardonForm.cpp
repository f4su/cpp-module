/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:14:26 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 18:14:07 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("")
{
	std::cout << "PresidentialPardonForm Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form("PresidentialPardonForm", 25, 5), target(src.getTarget())
{
	std::cout << "PresidentialPardonForm Copy constructor called\n";
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm Name constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called\n";
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	rhs.getTarget();
	return (*this);
}

const std::string	&PresidentialPardonForm::getTarget(void)const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor)const
{
	this->checkExec(executor);
	std::cout << BOLD << this->target << " has been pardoned by Zafod Beeblebrox.\n"CLOSE;
}
