/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:01:25 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 16:32:22 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat Copy constructor called\n";
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete (this->brain);
}

Cat &	Cat::operator=(Cat const & rhs)
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

Animal	&Cat::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return (*this);
}

Brain	*Cat::getBrain(void)const
{
	return (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound\n";
}
