/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:02 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 15:04:40 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(Bureaucrat::min_grade)
{
	std::cout << "Bureaucrat Default constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat Copy constructor called\n";
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat Name constructor called\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called\n";
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->grade = rhs.getGrade();
	return (*this);
}

const std::string	&Bureaucrat::getName(void)const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void)const
{
	return (this->grade);
}
void	Bureaucrat::incrementGrade(int zenbat)
{
	this->grade -= zenbat;
	checkGrade();
}

void	Bureaucrat::decrementGrade(int zenbat)
{
	this->grade += zenbat;
	checkGrade();
}

void	Bureaucrat::checkGrade(void)const
{
	if (this->grade < Bureaucrat::max_grade)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->grade > Bureaucrat::min_grade)
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << BOLD << instance.getName() << ", Bureaucrat grade " << instance.getGrade() << CLOSE;
	return (ostr);
}

bool	Bureaucrat::signForm(Form &form)const
{
	if (form.beSigned(*this))
	{
		std::cout << BOLD << this->name << " signs form " << form.getName() << "\n"CLOSE;
		return (true);
	}
	else
	{
		std::cout << BOLD << this->name << " cannot sign form " << form.getName() << " because grade is low" << "\n"CLOSE;
		return (false);
	}
}
