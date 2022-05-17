/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:35:59 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 16:35:16 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called\n";
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void)const
{
	std::cout << "A sound has been done\n";
}

const std::string	&Animal::getType(void)const
{
	return (this->type);
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance)
{
	ostream << instance.getType();;
	return (ostream);
}
