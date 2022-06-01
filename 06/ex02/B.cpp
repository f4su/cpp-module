/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:09:27 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 21:20:23 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "B Default constructor called\n";
}

B::B(const B &src)
{
	std::cout << "B Copy constructor called\n";
	*this = src;
}

B::~B()
{
	std::cout << "B destructor called\n";
}

B	&B::operator=(B const & rhs)
{
	(void) rhs;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, B const & instance)
{
	(void)instance;
	ostr << BOLD"No value for B\n"CLOSE;
	return (ostr);
}
