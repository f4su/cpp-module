/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:14:15 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 18:19:19 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("")
{
	std::cout << "RobotomyRequestForm Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form("RobotomyRequestForm", 72, 45), target(src.getTarget())
{
	std::cout << "RobotomyRequestForm Copy constructor called\n";
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm Name constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	rhs.getTarget();
	return (*this);
}

const std::string	&RobotomyRequestForm::getTarget(void)const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor)const
{
	this->checkExec(executor);
	std::cout << BOLD"/* drilling noises */\n"CLOSE;
	if (std::rand() % 2)
		std::cout << BOLD << this->target << " has been robotomized successfully\n"CLOSE;
	else
		std::cout << BOLD << this->target << " robozimitation has failed\n"CLOSE;

}
