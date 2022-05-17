/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:35 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/12 16:49:06 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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

	std::cout << "FragTrap start\n\n";
	FragTrap	Maitane("Maitane");
	FragTrap	Lucia("Lucia");
	FragTrap	Andy("Andy");

	Maitane.print_inits();
	Maitane.attack("Lucia");
	Lucia.takeDamage(4);
	Andy.beRepaired(7);
	Andy.highFivesGuys();
	std::cout << "\nFragTrap finish\n\n";

	std::cout << "DiamondTrap start\n\n";
	DiamondTrap	Ernesto("Ernesto");
	DiamondTrap	Unai("Unai");
	DiamondTrap	Miguel("Miguel");

	Ernesto.print_inits();
	Ernesto.highFivesGuys();
	Ernesto.whoAmI();
	Unai.attack("Miguel");
	Miguel.takeDamage(17);
	Miguel.beRepaired(12);
	std::cout << "\nDiamondTrap finish\n\n";
	return (0);
}
