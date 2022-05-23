/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:43:36 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:43:38 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character: public ICharacter
{
	private:
		std::string			name;
		static const int	s_inv = 4;
		int					n_equip;
		AMateria			*inventory[Character::s_inv];
		Character();
	public:
		Character(const Character &src);
		Character(const std::string &name);
		~Character();
		Character		&operator=(const Character &rhs);
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
		virtual std::string const	&getName(void)const;

};

#endif
