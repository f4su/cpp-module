/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:43:51 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:43:52 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	public:
		Cure();
		Cure(const Cure &src);
		~Cure();
		Cure				&operator=(const Cure &rhs);
		virtual AMateria	*clone(void)const;
		virtual void		use(ICharacter& target);
};

#endif
