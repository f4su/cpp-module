/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:14:05 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/24 17:55:09 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					n;
		static const int	nb_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &obj1);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed	&operator=(const Fixed &obj2);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &obj3, Fixed const &obj4);

#endif
