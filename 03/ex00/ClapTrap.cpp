/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:05 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 14:18:26 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name): name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap Name constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap Copy constructor called\n";
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << BOLD"ClapTrap " << this->get_name() << " attacks " << target << ", causing " <<  this->get_Hitpoints() <<  " points of damage!\n" << CLOSE;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << BOLD"ClapTrap " << this->get_name() << " has taken " << amount <<  " points of damage!\n" << CLOSE;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BOLD"ClapTrap " << this->get_name() << " has been repaired with " << amount << " points!\n" << CLOSE;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & src)
{
	return (o << src.get_name());
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.get_name();
		this->Hitpoints = rhs.get_Hitpoints();
		this->Energy_points = rhs.get_Energy_points();
		this->Attack_damage = rhs.get_Attack_damage();
	}
	return (*this);
}

std::string	ClapTrap::get_name(void)const
{
	return (this->name);
}

int	ClapTrap::get_Hitpoints(void)const
{
	return (this->Hitpoints);
}

int	ClapTrap::get_Energy_points(void)const
{
	return (this->Energy_points);
}

int	ClapTrap::get_Attack_damage(void)const
{
	return (this->Attack_damage);
}

void	ClapTrap::print_inits(void)const
{
	std::cout << BOLD"\nHit points initialised with -->[" << this->Hitpoints << "]\n" << CLOSE;
	std::cout << BOLD"Energy points initialised with -->[" << this->Energy_points << "]\n" << CLOSE;
	std::cout << BOLD"Attack damage initialised with -->[" << this->Attack_damage << "]\n\n" << CLOSE;
}
