/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:49:37 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/30 16:07:25 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>

class EndError : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ( BOLD"iterator --> reached end of container"CLOSE);
		}
};

template <typename T>
typename T::Iterator	easyfind(T &a, int n)
{
	typename T::iterator	res = find(a.begin(), a.end(), n);

	if (res == a.end())
		return (a.end());
	return (res);
}

template <typename T>
void	print(T iterator, T end)
{
	if (iterator != end)
		std::cout << BOLD"iterator --> " << *iterator << "\n"CLOSE;
	else
		throw (EndError());
}

#endif
