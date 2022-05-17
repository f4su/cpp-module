/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:29:11 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 17:00:42 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();
		WrongAnimal &	operator=(WrongAnimal const & rhs);
		const std::string	&getType(void)const;
		virtual void		makeSound(void)const;
};

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance);

#endif
