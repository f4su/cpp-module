/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:07 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 19:23:50 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
//////////////////////////////////////////////////////
//
	Form			*form = NULL;
	Bureaucrat		Marcos("Marcos", 1);
	Bureaucrat		Luis("Luis", 40);
	Bureaucrat		Martin("Martin", 150);
//
//////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////
//
	try
	{
		form = new PresidentialPardonForm("Pres1");
		std::cout << "\n";
		form->execute(Marcos);
		delete (form);
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n";
	try
	{
		form = new PresidentialPardonForm("Pres2");
		std::cout << "\n";
		form->beSigned(Marcos);
		form->execute(Marcos);
		std::cout << "\n";
		delete (form);
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////
//
	try
	{
		form = new RobotomyRequestForm("Rob");
		form->beSigned(Marcos);
		std::cout << "\n";
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		form->execute(Luis);
		std::cout << "\n";
		delete (form);
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////
//
	try
	{
		form = new ShrubberyCreationForm("CREATION");
		form->beSigned(Marcos);
		std::cout << "\n";
		form->execute(Luis);
		form->execute(Martin);
		delete (form);
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////
	std::cout << "\n";
	return (0);
}
