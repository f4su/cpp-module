/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:41:58 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 21:07:28 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::debug( void )
{
		std::cout << "[ DEBUG ]\n";
		std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Karen::info( void )
{
		std::cout << "[ INFO ]\n";
		std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!.\n";
}

void	Karen::warning( void )
{
		std::cout << "[ WARNING ]\n";
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void	Karen::error( void )
{
		std::cout << "[ ERROR ]\n";
		std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain( std::string level )
{
	int			i;
	std::string	posibilities[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4)
		if (!posibilities[i].compare(level))
			break ;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
	}
}
