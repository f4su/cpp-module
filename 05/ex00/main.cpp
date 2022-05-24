/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:07 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/24 14:46:00 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
//////////////////////////////////////////////////////////////
//
	try
	{
		Bureaucrat	Marcos = Bureaucrat("Marcos", 130);
		std::cout << Marcos << "\n";
		Marcos.incrementGrade(10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////////////
//
	try
	{
		Bureaucrat	Luis = Bureaucrat("Luis", 55);
		std::cout << Luis << "\n";
		Luis.decrementGrade(10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////////////
//
	try
	{
		Bureaucrat	Julia = Bureaucrat("Julia", 0);
		std::cout << Julia << "\n";
		Julia.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////////////
//
	try
	{
		Bureaucrat	Mai = Bureaucrat("Mai", 150);
		std::cout << Mai << "\n";
		Mai.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////////////
//
	try
	{
		Bureaucrat	Ben = Bureaucrat("Ben", 0);
		std::cout << Ben << "\n";
		Ben.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////////////
	std::cout << "\n";
//////////////////////////////////////////////////////////////
//
	try
	{
		Bureaucrat	Jaime = Bureaucrat("Jaime", 151);
		std::cout << Jaime << "\n";
		Jaime.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//
//////////////////////////////////////////////////////////////
	return (0);
}
