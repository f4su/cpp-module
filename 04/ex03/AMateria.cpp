/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:13:26 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/17 17:15:56 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria String constructor called\n";
}

const std::string	&AMateria::getType(void)const
{
	return (this->type);
}
