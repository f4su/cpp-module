/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:00:18 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 14:21:42 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap Name constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap Copy constructor called\n";
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << BOLD"DiamondTrap I am " << this->name << "\n" << CLOSE;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
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

void	DiamondTrap::print_inits(void)const
{
	std::cout << BOLD"\nHit points initialised with -->[" << this->Hitpoints << "]\n" << CLOSE;
	std::cout << BOLD"Energy points initialised with -->[" << this->Energy_points << "]\n" << CLOSE;
	std::cout << BOLD"Attack damage initialised with -->[" << this->Attack_damage << "]\n\n" << CLOSE;
}
