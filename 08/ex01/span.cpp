/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:08:48 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/30 20:03:40 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : N(0)
{
	std::cout << "Span Default constructor called\n";
}



Span::Span(Span const &src)
{
	std::cout << "Span Int constructor called\n";
	*this = src;
}

Span::Span(unsigned int N) : N(N), N_store(0) 
{
	std::cout << "Span Copy constructor called\n";
}

Span::~Span()
{
	std::cout << "Span Destructor called\n";
}

Span	&Span::operator=(Span const &rhs)
{
	this->N = rhs.N;
	this->N_store = rhs.N_store;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostr, const Span &instance)
{
	ostr << "Span max size is " << instance.maxSize() << " which contains "
		<< instance.size() << " number of numbers";
	return (ostr);
}

void	Span::addNumber(int n)
{
	if (N_store.size() == this->N)
		throw (Span::ErrNum());
	N_store.push_back(n);
}

void	Span::randomFill(void)
{
	unsigned int	i = -1;
	unsigned int	n_fill = this->spaceLeft();

	while (++i < n_fill)
		this->addNumber(rand() % (this->maxSize() * 10));
}

int	Span::shortestSpan(void)const
{
	int							res = -1;
	std::vector<int>			v1 = N_store;
	std::vector<int>::iterator	iter = v1.begin() + 1;

	if (N_store.size() <= 1)
		throw (Span::ErrLogic());
	sort(v1.begin(), v1.end());
	res = *(v1.begin() + 1) - *v1.begin();
	if (this->size() == 2)
		return (res);
	while (++iter != v1.end() - 1 && res != 0)
	{
		if (*(iter + 1) - *iter < res)
			res = *(iter + 1) - *iter;
	}
	return (res);
}

int	Span::longestSpan(void)const
{
	std::vector<int>	v1 = N_store;

	if (N_store.size() <= 1)
		throw (Span::ErrLogic());
	sort(v1.begin(), v1.end());
	return (*(v1.end() - 1) - *v1.begin());
}

unsigned int	Span::size(void)const
{
	return (N_store.size());
}

unsigned int	Span::maxSize(void)const
{
	return (this->N);
}

unsigned int	Span::spaceLeft( void ) const
{
	return (maxSize() - size());
}

void	Span::addByIteratorRange( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	v1(begin, end);

	if (v1.size() > this->spaceLeft())
		throw (Span::ErrNum());
	copy(v1.begin(), v1.end(), std::back_inserter(this->N_store));
}
