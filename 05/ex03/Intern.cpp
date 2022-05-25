/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:27:28 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 20:16:59 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called\n";
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern Copy constructor called\n";
	*this = src;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called\n";
}

Intern	&Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Intern const & instance)
{
	(void)	instance;
	ostr << BOLD"Intern that works on his things\n"CLOSE;
	return (ostr);
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target)const
{
	t_fL f[] = 
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "", 0 }
	};
	Form	*resultForm = NULL;
	int 	i = -1;

	while (f[++i].formType)
	{
		if (f[i].formName == formName)
			resultForm = f[i].formType;
		else
			delete (f[i].formType);
	}
	std::cout << "\n";
	if (resultForm == NULL)
		std::cout << BOLD"Intern due to no Form does not create ";
	else
		std::cout << BOLD"Intern creates ";
	std::cout << formName << "\n" << CLOSE;
	return (resultForm);
}
