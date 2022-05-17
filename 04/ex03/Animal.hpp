/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:36:48 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 16:38:50 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"
# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();
		virtual Animal &	operator=(Animal const & rhs);
		const std::string	&getType(void)const;
		virtual void		makeSound(void)const;
		virtual Brain		*getBrain(void)const = 0;
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);

#endif
