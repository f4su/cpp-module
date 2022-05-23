/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:24:46 by pohl              #+#    #+#             */
/*   Updated: 2022/05/23 20:35:50 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): n_learn(0)
{
	std::cout << "MateriaSource Default constructor called\n";
	int i = -1;
	while (++i < MateriaSource::s_mat)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource Copy constructor called\n";
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called\n";
	int i = -1;
	while (++i < MateriaSource::s_mat)
	{
		if (this->materias[i])
			delete (this->materias[i]);
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	int i = -1;
	while (++i < MateriaSource::s_mat)
	{
		if (this->materias[i])
			delete (this->materias[i]);
		if (rhs.materias[i])
			this->materias[i] = rhs.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *materia_to_learn)
{
	if (this->n_learn >= MateriaSource::s_mat)
		std::cout << BOLD"Cannot learn more materias\n"CLOSE;
	else
	{
		this->materias[this->n_learn] = materia_to_learn;
		this->n_learn++;
		std::cout << BOLD"Learned " << materia_to_learn->getType() << "\n"CLOSE;
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	int i = -1;
	while (++i < MateriaSource::s_mat && this->materias[i])
		if (type == this->materias[i]->getType())
			return (this->materias[i]->clone());
	return (0);
}
