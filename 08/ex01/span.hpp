/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:09:07 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/30 20:04:01 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <cstdlib>
# include <vector>
# include <iterator>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	N_store;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();
		Span	&operator=(const Span &rhs);
		void	addNumber(int n);
		void	randomFill( void );
		int				shortestSpan(void)const;
		int				longestSpan(void)const;
		unsigned int	size(void)const;
		unsigned int	maxSize(void)const;
		unsigned int	spaceLeft(void)const;
		void			addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end);

	public:
		class ErrNum : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ( BOLD"Cannot add more numbers"CLOSE);
			}
		};
		class ErrLogic : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ( BOLD"Not enough numbers stored to provide a Span"CLOSE);
			}
		};

};

std::ostream	&operator<<(std::ostream &ostr, const Span &instance);

static inline void EOL(void)
{
	std::cout << "\n";
}

#endif
