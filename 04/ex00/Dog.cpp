/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:54:36 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 15:35:34 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called\n";
	this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog Copy constructor called\n";
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}
/*
Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type();
	return (*this);
}
*/
void	Dog::makeSound(void) const
{
	std::cout << "Dog sound\n";
}
