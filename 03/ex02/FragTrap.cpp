/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:40:50 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 14:17:07 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called\n";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap Name constructor called\n";
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap Copy constructor called\n";
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << BOLD << "FragTrap "<< get_name() << " high fives\n" << CLOSE;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::print_inits(void)const
{
	std::cout << BOLD"\nHit points initialised with -->[" << this->Hitpoints << "]\n" << CLOSE;
	std::cout << BOLD"Energy points initialised with -->[" << this->Energy_points << "]\n" << CLOSE;
	std::cout << BOLD"Attack damage initialised with -->[" << this->Attack_damage << "]\n\n" << CLOSE;
}
