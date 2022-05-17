/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:42:52 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 19:37:05 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	size_t	i;
	size_t	N;

	N = 9;
	i = -1;
	Zombie	*zombieH = zombieHorde(N, "Enekoitz");
	while (++i < N)
		zombieH[i].announce();
	delete [] zombieH;
	return (0);
}
