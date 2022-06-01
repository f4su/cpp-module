/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:39:57 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 20:41:28 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
	std::cout << "Serialize Default constructor called\n";
}

Serialize::	Serialize(Serialize const & rhs)
{
	std::cout << "Serialize Copy constructor called\n";
	*this = src;
}

Serialize::	~Serialize()
{
	std::cout << "Serialize desconstructor called\n";
}

Serialize	&Serialize::operator=(Casting const & rhs)
{
	(void) rhs;
	return (*this);
}

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
