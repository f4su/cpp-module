/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:02:28 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/31 12:15:16 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>()
		{
			std::cout << "MutantStack Default constructor called\n";
		}
		MutantStack<T>(const MutantStack<T> &src)
		{
			std::cout << "MutantStack Copy constructor called\n";
			*this = src; 
		}
		~MutantStack<T>()
		{
			std::cout << "MutantStack Destructor called\n";
		}
		MutantStack<T>	&operator=(MutantStack<T> const &rhs)
		{
			(void) rhs;
			return (*this);
		}
		typedef typename	std::stack<T>::container_type::iterator	iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
};

#endif
