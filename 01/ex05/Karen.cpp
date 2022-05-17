/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:41:58 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/21 15:02:18 by jgainza-         ###   ########.fr       */
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
	if (!this->level.compare(__func__))
		std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Karen::info( void )
{
	if (!this->level.compare(__func__))
		std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!.\n";
}

void	Karen::warning( void )
{
	if (!this->level.compare(__func__))
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void	Karen::error( void )
{
	if (!this->level.compare(__func__))
		std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain( std::string level )
{
	int		i;
	void	(Karen::*posibilities[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	i = -1;
	std::cout << "[ " << level << " ]\n";
	std::transform(level.begin(), level.end(), level.begin(), ::tolower);
	this->level = level;
	while (++i < 4)
		(this->*posibilities[i])();
}
