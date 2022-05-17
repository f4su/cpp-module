/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:07:28 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/17 17:07:54 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( const Ice &src );
		~Ice( void );
		Ice		&operator=( const Ice &other );
		virtual AMateria	*clone( void ) const ;
		virtual void		use(ICharacter& target);
};

#endif
