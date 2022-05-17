/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:15:10 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 19:40:11 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	name(name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}

void	HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with : ";
	std::cout << this->type->getType();
	std::cout << std::endl;
}
