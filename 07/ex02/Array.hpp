/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:28:03 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/28 22:25:14 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <stdexcept>

template <typename A>
class Array
{
	private:
		int	n;
		A	*str;
	public:
		Array<A>() : n(0), str(0)
		{
			std::cout << "Array<A> Default constructor called\n";
		}
		Array<A>(const Array<A> &src)
		{
			std::cout << "Array<A> Copy constructor called\n";
			*this = src;
		}
		Array<A>(unsigned int n) : n(n)
		{
			std::cout << "Array<A> n constructor called\n";
			if (n < 0)
				throw (Array<A>::Error());
			this->str = new A[n];
		}
		~Array<A>()
		{
			std::cout << "Array<A> Destructor called\n";
			if (this->n > 0)
				delete [] (this->str);
		}
		Array<A>	&operator=(const Array<A> &rhs)
		{
			int	i = -1;

			if (this == &rhs)
				return (*this);
			if (this->n > 0)
				delete [] (this->str);
			this->n = rhs.getN();
			this->str = new A[this->n];
			while (++i < this->n)
				this->str[i] = rhs[i];
			return (*this);
		}
		int	getN(void)const
		{
			return (this->n);
		}
		A			&operator[](const int idx) const
		{
			if (idx >= this->n || idx < 0)
				throw (Array<A>::Error());
			return this->str[idx];
		}
	public:
		class Error : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return(BOLD"Index out of bounds"CLOSE);
				}
		};
};

template<typename A>
std::ostream	&operator<<( std::ostream &ostr, const Array<A> &instance )
{
	ostr << BOLD << instance.getN() << "\n"CLOSE;
	return (ostr);
}

static inline void EOL(void)
{
	std::cout << "\n";
}

#endif
