/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:47 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/17 13:48:30 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	int		i =	-1;;
	int		n_animals = 8;
	Animal	*animals[n_animals];
	Brain	*brain;

	std::cout << "\n";
	while (++i < n_animals)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << "\n";
		std::cout << BOLD"Animal type is --->" << animals[i]->getType() << "\n"CLOSE;
		std::cout << "\n";
	}

	brain = animals[7]->getBrain();
	brain->ideas[0] = "Seems like i can have ideas";
	brain->ideas[1] = "I have run out of ideas";
	brain->ideas[2] = "I just had this crazy idea";
	brain->ideas[3] = "I have no idea";

	std::cout << BOLD"IDEAS:\n\n"CLOSE;

	std::cout << BOLD << animals[7]->getBrain()->ideas[2] << "\n\n"CLOSE;

	*(animals[5]) = *(animals[7]);
	std::cout << BOLD << animals[5]->getBrain()->ideas[0] << "\n\n"CLOSE;

	*(animals[2]) = *(animals[5]);
	std::cout << BOLD << animals[2]->getBrain()->ideas[3] << "\n\n"CLOSE;

	*(animals[6]) = *(animals[2]);
	std::cout << BOLD << animals[6]->getBrain()->ideas[1] << "\n\n"CLOSE;

	i = -1;
	while (++i < n_animals)
		delete (animals[i]);
}
