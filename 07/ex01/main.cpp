/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:20:20 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/28 18:54:30 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::string	str[4];
	int			*rand = new int[4];

	str[0] = "Its minging";
	str[1] = "calypso";
	str[2] = "the calypso its minging";
	str[3] = "ratio";

	std::cout << BOLD"\nSTRING ITER TEST\n\n"CLOSE;
	::iter(str, 4, print);

	std::cout << BOLD"\nRANDOM NUMBER ITER TEST\n\n"CLOSE;
	::randomNum(rand, 4);
	::iter(rand, 4, print);
	EOL();

	delete [] (rand);
	return (0);
}
