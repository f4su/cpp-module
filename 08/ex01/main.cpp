/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:27:07 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/30 20:11:49 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span	sp = Span(5);
	Span	sp1 = Span(10);
	Span	sp2 = Span(10000);
	Span	sp3 = Span(15);

	EOL();
///////////////////////////////////////////////////////////////////	
//	
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << BOLD << sp << "\n"CLOSE;

		std::cout << BOLD << "Shortest span --> " << sp.shortestSpan() << "\n"CLOSE;
		std::cout << BOLD << "Longest span --> " << sp.longestSpan() << "\n"CLOSE;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//	
///////////////////////////////////////////////////////////////////	
	EOL();
///////////////////////////////////////////////////////////////////	
//	
	try
	{
		sp1.addNumber(84);

		std::cout << BOLD << sp1 << "\n"CLOSE;

		std::cout << BOLD << "Shortest span --> " << sp1.shortestSpan() << "\n"CLOSE;
		std::cout << BOLD << "Longest span --> " << sp1.longestSpan() << "\n"CLOSE;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//	
///////////////////////////////////////////////////////////////////
	EOL();
///////////////////////////////////////////////////////////////////	
//	
	try
	{
		sp2.randomFill();

		std::cout << BOLD << sp2 << "\n"CLOSE;

		std::cout << BOLD << "Shortest span --> " << sp2.shortestSpan() << "\n"CLOSE;
		std::cout << BOLD << "Longest span --> " << sp2.longestSpan() << "\n"CLOSE;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//	
///////////////////////////////////////////////////////////////////	
	EOL();
///////////////////////////////////////////////////////////////////	
//	
	std::vector<int>	vect;

	try
	{
		vect.push_back(25);
		vect.push_back(5);
		vect.push_back(12);
		vect.push_back(90);
		vect.push_back(54);
		vect.push_back(130);
		vect.push_back(112);
		vect.push_back(39);
		vect.push_back(142);

		sp3.addByIteratorRange(vect.begin(), vect.end());

		std::cout << BOLD << sp3 << "\n"CLOSE;

		std::cout << BOLD << "Shortest span --> " << sp3.shortestSpan() << "\n"CLOSE;
		std::cout << BOLD << "Longest span --> " << sp3.longestSpan() << "\n"CLOSE;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
//	
///////////////////////////////////////////////////////////////////	
	EOL();

	return (0);
}
