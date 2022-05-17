/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:34 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 16:57:30 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat Copy constructor called\n";
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}
/*
WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type();
	return (*this);
}
*/
void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound\n";
}
