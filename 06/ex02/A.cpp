/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:09:12 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 21:19:35 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "A Default constructor called\n";
}

A::A(const A &src)
{
	std::cout << "A Copy constructor called\n";
	*this = src;
}

A::~A()
{
	std::cout << "A destructor called\n";
}

A	&A::operator=(A const & rhs)
{
	(void) rhs;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, A const & instance)
{
	(void)instance;
	ostr << BOLD"No value for A\n"CLOSE;
	return (ostr);
}
