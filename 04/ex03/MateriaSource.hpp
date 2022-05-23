/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:24:46 by pohl              #+#    #+#             */
/*   Updated: 2022/05/23 20:40:32 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		const static int	s_mat = 4;
		int					n_learn;
		AMateria			*materias[MateriaSource::s_mat];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource();
		MateriaSource		&operator=(const MateriaSource &rhs);
		virtual void		learnMateria(AMateria *materia_to_learn);
		virtual AMateria	*createMateria(std::string const & type);

};

#endif
