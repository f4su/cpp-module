/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:32:08 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 16:57:27 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "A wrong sound has been done\n";
}

const std::string	&WrongAnimal::getType(void)const
{
	return (this->type);
}

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance)
{
	ostream << instance.getType();;
	return (ostream);
}
