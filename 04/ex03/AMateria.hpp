/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:43:27 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:43:29 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria( const std::string &type );
		virtual	~AMateria(){}
		std::string const	&getType(void)const;
		virtual AMateria	*clone(void)const = 0;
		virtual void		use(ICharacter& target) = 0;

};

#endif
