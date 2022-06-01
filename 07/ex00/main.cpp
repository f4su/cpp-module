/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:11:21 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/28 18:06:08 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	char	c1 = 'a';
	char	c2 = 'b';
	int		i1 = 1;
	int		i2 = 2;
	float	f1 = 12.3;
	float	f2 = 36.7;
	double	d1 = 192.357;
	double	d2 = 351.24;
	std::string	s1 = "str1";
	std::string	s2 = "str2";

	std::cout << BOLD"c1 -->[" << c1 << "] c2 -->[" << c2 << "]\n";
	std::cout << "i1 -->[" << i1 << "] i2 -->[" << i2 << "]\n";
	std::cout << "f1 -->[" << f1 << "] f2 -->[" << f2 << "]\n";
	std::cout << "d1 -->[" << d1 << "] d2 -->[" << d2 << "]\n";
	std::cout << "s1 -->[" << s1 << "] s2 -->[" << s2 << "]\n\n";

	std::cout << "PROCEEDING TO SWAP VALUES\n\n";

	::swap(c1, c2);
	::swap(i1, i2);
	::swap(f1, f2);
	::swap(d1, d2);
	::swap(s1, s2);

	std::cout << "c1 -->[" << c1 << "] c2 -->[" << c2 << "]\n";
	std::cout << "i1 -->[" << i1 << "] i2 -->[" << i2 << "]\n";
	std::cout << "f1 -->[" << f1 << "] f2 -->[" << f2 << "]\n";
	std::cout << "d1 -->[" << d1 << "] d2 -->[" << d2 << "]\n";
	std::cout << "s1 -->[" << s1 << "] s2 -->[" << s2 << "]\n\n";

	std::cout << "SHOWING MAX VALUES\n\n";

	std::cout << "max(c1, c2) -->[" << ::max(c1, c2) << "]\n";
	std::cout << "max(i1, i2) -->[" << ::max(i1, i2) << "]\n";
	std::cout << "max(f1, f2) -->[" << ::max(f1, f2) << "]\n";
	std::cout << "max(d1, d2) -->[" << ::max(d1, d2) << "]\n";
	std::cout << "max(s1, s2) -->[" << ::max(s1, s2) << "]\n\n";

	std::cout << "SHOWING MIN VALUES\n\n";

	std::cout << "min(c1, c2) -->[" << ::min(c1, c2) << "]\n";
	std::cout << "min(i1, i2) -->[" << ::min(i1, i2) << "]\n";
	std::cout << "min(f1, f2) -->[" << ::min(f1, f2) << "]\n";
	std::cout << "min(d1, d2) -->[" << ::min(d1, d2) << "]\n";
	std::cout << "min(s1, s2) -->[" << ::min(s1, s2) << "]\n\n"CLOSE;

	return (0);
}
