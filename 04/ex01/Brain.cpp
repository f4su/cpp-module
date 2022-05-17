/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:31:29 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 16:31:17 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called\n";
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called\n";
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

Brain &	Brain::operator=(Brain const & rhs)
{
	int	i;

	i = -1;
	while (++i < Brain::n_ideas)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
