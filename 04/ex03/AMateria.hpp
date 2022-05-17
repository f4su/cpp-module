/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:20:58 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/17 17:17:59 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

class	AMateria : public ICharacter
{
	protected:
		std::string	type;
	public:
		AMateria(std::string const & type);
		virtual	~AMateria(){}
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
