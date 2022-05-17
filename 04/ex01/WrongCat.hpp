/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:37:56 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 17:00:43 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{	
	public:
		WrongCat();
		WrongCat(WrongCat const & src);
		~WrongCat();
//		WrongCat &	operator=(WrongCat const & rhs);
		virtual void	makeSound(void) const;
};

#endif
