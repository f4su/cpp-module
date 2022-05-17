/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:14:05 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/23 14:18:55 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					n;
		static const int	nb_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &obj1);
		~Fixed(void);
		Fixed	&operator=(const Fixed &obj2);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
