/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:43:22 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/23 20:43:24 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): type(type)
{
	std::cout << "AMateria String constructor called\n";
}

const std::string	&AMateria::getType(void)const
{
	return (this->type);
}
