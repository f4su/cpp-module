/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:08:56 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 21:20:33 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	std::cout << "C Default constructor called\n";
}

C::C(const C &src)
{
	std::cout << "C Copy constructor called\n";
	*this = src;
}

C::~C()
{
	std::cout << "C destructor called\n";
}

C	&C::operator=(C const & rhs)
{
	(void) rhs;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, C const & instance)
{
	(void)instance;
	ostr << BOLD"No value for C\n"CLOSE;
	return (ostr);
}
