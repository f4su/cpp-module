/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:43:45 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/10 13:29:04 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*zombieHorde = new Zombie[N];

	i  = -1;
	while (++i < N)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
