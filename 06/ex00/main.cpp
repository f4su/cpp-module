/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:33:24 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 17:21:52 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casting.hpp"

int	main(int argc, char **argv)
{
	Casting	cast;
	int		i = 0;

	try
	{
		if (argc == 1)
			throw(Casting::NoIn());
		while (++i < argc)
		{
			EOL();
			cast.check_input(argv[i]);
			if (!argv[i + 1])
				EOL();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
}
