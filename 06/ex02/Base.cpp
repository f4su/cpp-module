/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:51:29 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 23:18:07 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	std::cout << "Base Default constructor called\n";
}

Base::Base(const Base &src)
{
	std::cout << "Base Copy constructor called\n";
	*this = src;
}

Base::~Base()
{
	std::cout << "Base destructor called\n";
}

Base	&Base::operator=(Base const & rhs)
{
	(void) rhs;
	return (*this);
}
