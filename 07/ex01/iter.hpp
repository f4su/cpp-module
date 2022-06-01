/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:16:04 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/28 18:54:32 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <random>

template <typename I>
void	print(I &a)
{
	std::cout << BOLD"Displaying --> " << a << "\n"CLOSE;
}

template <typename I>
void	iter(I *s, int len, void (*b)(const I &))
{
	int i = -1;

	while (++i < len)
		b(s[i]);
}

template <typename I>
void	randomNum(I *rand, int len)
{
	int i = -1;

	while (++i < len)
		rand[i] = std::rand() % 1000;
}

static inline void	EOL(void)
{
	std::cout << "\n";
}

#endif
