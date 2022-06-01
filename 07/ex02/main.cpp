/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:27:15 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/28 22:45:15 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>			A_int(10);
	Array<int>			A_int_c;
	Array<std::string>	A_string(5);
	Array<std::string>	A_string_c;
	int					i = -1;

	A_string[0] = "Zero";
	A_string[1] = "One";
	A_string[2] = "Two";
	A_string[3] = "Three";
	A_string[4] = "Four";
	A_int_c = A_int;
	A_string_c = A_string;

	std::cout << BOLD"\nSIZE CHECKER\n\n";

	std::cout << "A_int size -->[" << A_int.getN() << "]\n";
	std::cout << "A_int_c size -->[" << A_int_c.getN() << "]\n";
	std::cout << "A_string size -->[" << A_string.getN() << "]\n";
	std::cout << "A_string_c size -->[" << A_string_c.getN() << "]\n\n";

	std::cout << BOLD"\nORIGINAL CHECKER\n\n";
	
	while (++i < A_int.getN())
	{
		try
		{
			std::cout << BOLD <<  A_string[i] << "\n"CLOSE;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}

	A_string_c[0] = "Zero but copy";
	A_string_c[1] = "One but copy";
	A_string_c[2] = "Two but copy";
	A_string_c[3] = "Three but copy";
	A_string_c[4] = "Four but copy";

	std::cout << BOLD"\nCOPY CHECKER\n\n";

	i = -1;
	while (++i < A_int_c.getN())
	{
		try
		{
			std::cout << BOLD <<  A_string_c[i] << "\n"CLOSE;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	EOL();

	return (0);
}
