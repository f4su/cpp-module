/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:05:38 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/30 16:07:27 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	int							i = -1;
	std::vector<int>			v1;

	while (++i < 10)
		v1.push_back(i);

	std::vector<int>::const_iterator	iter = v1.begin();
	std::vector<int>::const_iterator	v2 = v1.end();

	try
	{
		while (++iter <= v2)
			print(iter, v2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	return (0);
}
