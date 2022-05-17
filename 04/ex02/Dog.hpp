/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:46:22 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 15:58:30 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(Dog const & src);
		~Dog();
		Dog &	operator=(Dog const & rhs);
		virtual void	makeSound(void) const;
		virtual Brain		*getBrain(void)const;
		virtual Animal	&operator=(const Animal &rhs);
};

#endif
