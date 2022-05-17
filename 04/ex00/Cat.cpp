/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:01:25 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 15:35:10 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called\n";
	this->type = "Cat";
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat Copy constructor called\n";
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}
/*
Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type();
	return (*this);
}
*/
void	Cat::makeSound(void) const
{
	std::cout << "Cat sound\n";
}
