/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:47 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 16:11:49 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "\n";
	j->makeSound(); //will output the dog sound!
	i->makeSound(); //will output the cat sound!
	meta->makeSound(); //will output sound!
	std::cout << "\n";
	delete (meta);
	delete (j);
	delete (i);

	std::cout << "\n";

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();

	std::cout << "\n";
	std::cout << iWrong->getType() << " " << std::endl;
	std::cout << "\n";
	iWrong->makeSound(); //will output the wrongcat sound!
	metaWrong->makeSound(); //will output wrong sound!
	std::cout << "\n";
	delete (metaWrong);
	delete (iWrong);
}
