/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:52:40 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 23:27:13 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <random>

class	Base
{
	public:
		Base();
		Base(const Base &src);
		virtual ~Base();
		Base	&operator=(Base const & rhs);
};

static inline void	EOL(void)
{
	std::cout << "\n";
}

#endif
