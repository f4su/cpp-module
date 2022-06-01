/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:07:51 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 22:54:24 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

# include "Base.hpp"

class	B : public Base
{
	public:
		B();
		B(const B &src);
		~B();
		B	&operator=(const B &rhs);
};

std::ostream	&operator<<(std::ostream &ostr, const B &instance);

#endif
