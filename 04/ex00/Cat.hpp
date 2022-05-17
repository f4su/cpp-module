/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:46:17 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 16:09:46 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{	
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
//		Cat &	operator=(Cat const & rhs);
		virtual void	makeSound(void) const;
};

#endif
