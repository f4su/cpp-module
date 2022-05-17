/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:14:27 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 19:41:00 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):
	type(type)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}
