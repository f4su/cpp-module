/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:16:20 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 14:19:36 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap Name constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap Copy constructor called\n";
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << BOLD"ScavTrap " << this->name << " attacks " << target << ", causing " <<  this->Hitpoints <<  " points of damage!\n" << CLOSE;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLD"ScavTrap " << this->name << " has taken " << amount <<  " points of damage!\n" << CLOSE;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLD"ScavTrap " << this->name << " has been repaired with " << amount << " heal points!\n" << CLOSE;
}

void	ScavTrap::guardGate()
{
	std::cout << BOLD"ScavTrap have enterred in Gate keeper mode\n" << CLOSE;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->Hitpoints = rhs.Hitpoints;
		this->Energy_points = rhs.Energy_points;
		this->Attack_damage = rhs.Attack_damage;
	}
	return (*this);
}

void	ScavTrap::print_inits(void)const
{
	std::cout << BOLD"\nHit points initialised with -->[" << this->Hitpoints << "]\n" << CLOSE;
	std::cout << BOLD"Energy points initialised with -->[" << this->Energy_points << "]\n" << CLOSE;
	std::cout << BOLD"Attack damage initialised with -->[" << this->Attack_damage << "]\n\n" << CLOSE;
}
