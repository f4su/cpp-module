/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:46:17 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/16 15:58:23 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat &	operator=(Cat const & rhs);
		virtual void	makeSound(void) const;
		virtual Brain		*getBrain(void)const;
		virtual Animal	&operator=(const Animal &rhs);
};

#endif
