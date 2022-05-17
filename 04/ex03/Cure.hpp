/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:07:33 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/17 16:50:18 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure &src );
		~Cure( void );
		Cure		&operator=( const Cure &other );
		virtual AMateria	*clone( void ) const ;
		virtual void		use(ICharacter& target);
};

#endif
