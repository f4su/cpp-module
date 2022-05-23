/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:44:07 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:44:11 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	public:
		Ice();
		Ice(const Ice &src);
		~Ice();
		Ice		&operator=(const Ice &rhs);
		virtual AMateria	*clone(void)const;
		virtual void		use(ICharacter& target);
};

#endif
