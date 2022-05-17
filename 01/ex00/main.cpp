/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:42:52 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 19:34:47 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("Maripiri");

	Zombie	*Jonan = newZombie("Jonan");
	Jonan->announce();
	delete Jonan;

	Zombie Juan("Juan");
	Juan.announce();
	return (0);
}
