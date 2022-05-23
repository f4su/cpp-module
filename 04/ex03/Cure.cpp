/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:43:40 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:43:41 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called\n";
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << "Cure Copy constructor called\n";
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called\n";	
}

Cure &	Cure::operator=(Cure const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << BOLD"* heals " << target.getName() << " wounds *\n"CLOSE;
}
