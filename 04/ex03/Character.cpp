/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:43:31 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:43:34 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name(""), n_equip(0)
{
	std::cout << "Character Default constructor called\n";
	int	i = -1;
	while (++i < Character::s_inv)
		this->inventory[i] = NULL;

}

Character::Character(const Character &src)
{
	std::cout << "Character Copy constructor called\n";
	*this = src;
}

Character::Character(const std::string  &name)

{
	std::cout << "Character String constructor called\n";
	*this = Character();
	this->name = name;
}

Character::~Character()
{
	std::cout << "Character Destructor called\n";	
}

Character	&Character::operator=(const Character &rhs)
{
	int	i = -1;
	this->n_equip = 0;
	while (++i < Character::s_inv)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = rhs.inventory[i];
		if (rhs.inventory[i])
			this->n_equip++;
	}
	this->name = rhs.getName();
	return (*this);
}

void	Character::equip(AMateria* m)
{
	if (this->n_equip < Character::s_inv)
	{
		this->inventory[this->n_equip] = m;
		this->n_equip++;
		std::cout << BOLD"Equipped--> " << m->getType() << "\n"CLOSE;
	}
	else
		std::cout << BOLD"Could not equip--> " << m->getType() << "\n"CLOSE;
}

void	Character::unequip(int idx)
{
	int i  = idx + 1;
	while (i < Character::s_inv && this->inventory[i])
	{
		this->inventory[i - 1] = this->inventory[i];
		i++;
	}
	this->inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
	this->unequip(idx);
}


std::string const	&Character::getName(void)const
{
	return (this->name);
}
