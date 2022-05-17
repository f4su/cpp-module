/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:33:52 by jgainza-          #+#    #+#             */
/*   Updated: 2022/04/03 19:38:30 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	originalSTR = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalSTR;
	std::string &stringREF = originalSTR;

	std::cout << "originalSTR address: " << &originalSTR << std::endl;
	std::cout << "originalSTR address with stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "originalSTR address with stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "originalSTR: " << originalSTR << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
