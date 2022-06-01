/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:11:18 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/28 01:11:30 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>

template <typename T>
const T &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

template <typename T>
const T &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <typename T>
void swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

#endif
