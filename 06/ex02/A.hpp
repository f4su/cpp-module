/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:07:56 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 22:54:16 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

# include "Base.hpp"

class	A : public Base
{
	public:
		A();
		A(const A &src);
		~A();
		A	&operator=(const A &rhs);
};

std::ostream	&operator<<(std::ostream &ostr, const A &instance);

#endif
