/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:54:36 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 16:32:04 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog Copy constructor called\n";
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete (this->brain);
}

Dog &	Dog::operator=(Dog const & rhs)
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

Animal	&Dog::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

Brain	*Dog::getBrain(void)const
{
	return (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound\n";
}
