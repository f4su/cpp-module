/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:36:48 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 16:09:08 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();
		Animal &	operator=(Animal const & rhs);
		const std::string	&getType(void)const;
		virtual void		makeSound(void)const;
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);

#endif
