/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:41:33 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 21:07:53 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	std::string	what_said;
	Karen		start;

	if (argc != 2)
	{
		std::cout << "Number or arguments incorrect\n";
		return (1);
	}
	what_said = argv[1];
	if (!what_said.compare("DEBUG") || !what_said.compare("INFO") || !what_said.compare("WARNING") || !what_said.compare("ERROR"))
		start.complain(what_said);
	else
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	return (0);
}
