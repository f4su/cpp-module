/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:35 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/12 14:34:43 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\nClapTrap start\n\n";
	ClapTrap Julio("Julio");
	ClapTrap Mario("Mario");
	ClapTrap Carmen("Carmen");

	Julio.print_inits();
	Julio.attack("Mario");
	Mario.takeDamage(9);
	Carmen.beRepaired(6);
	std::cout << "\nClapTrap finish\n\n";

	std::cout << "ScavTrap start\n\n";
	ScavTrap	Marcos("Marcos");
	ScavTrap	Juan("Juan");
	ScavTrap	Manu("Manu");
	
	Marcos.print_inits();
	Marcos.attack("Carmen");
	Juan.takeDamage(1);
	Manu.beRepaired(3);
	Manu.guardGate();
	std::cout << "\nScavTrap finish\n\n";
	return (0);
}
