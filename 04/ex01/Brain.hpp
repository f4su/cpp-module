/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:31:55 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 15:55:25 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		static const int	n_ideas = 100;
	public:
		Brain();
		Brain(Brain const & src);
		~Brain();
		Brain &	operator=(Brain const & rhs);
		std::string	ideas[Brain::n_ideas];
};

#endif
