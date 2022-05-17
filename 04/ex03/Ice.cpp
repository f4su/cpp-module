/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:54:12 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/17 17:07:45 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice Default constructor called\n";
}

Ice::Ice(Ice const & src)
{
	std::cout << "Ice Copy constructor called\n";
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called\n";	
}

Ice &	Ice::operator=(Ice const & rhs)
{
	this->type = rhs.type();
	return (*this);
}

AMateria	*Ice::clone(void)const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << BOLD"* shoots an ice bolt at " << target.getName() << " *\n"CLOSE;
}
