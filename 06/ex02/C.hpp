/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Cy: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:07:45 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 22:54:29 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

# include "Base.hpp"

class	C : public Base
{
	public:
		C();
		C(const C &src);
		~C();
		C	&operator=(const C &rhs);
};

std::ostream	&operator<<(std::ostream &ostr, const C &instance);

#endif
