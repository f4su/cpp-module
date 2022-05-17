/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:35 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/12 14:13:33 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Julio("Julio");
	ClapTrap Mario("Mario");
	ClapTrap Carmen("Carmen");

	Julio.print_inits();
	Julio.attack("Mario");
	Mario.takeDamage(9);
	Carmen.beRepaired(6);
	std::cout << "\n";
	return (0);
}
