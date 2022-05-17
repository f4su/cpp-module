/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:14:05 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/09 14:47:09 by jgainza-         ###   ########.fr       */
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
		Fixed				&operator=(const Fixed &obj2);
		bool				operator>(const Fixed &obj2) const;
		bool				operator<(const Fixed &obj2) const;
		bool				operator>=(const Fixed &obj2) const;
		bool				operator<=(const Fixed &obj2) const;
		bool				operator==(const Fixed &obj2) const;
		bool				operator!=(const Fixed &obj2) const;
		Fixed				operator+(const Fixed &obj2) const;
		Fixed				operator-(const Fixed &obj2) const;
		Fixed				operator*(const Fixed &obj2) const;
		Fixed				operator/(const Fixed &obj2) const;
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
		float 				toFloat( void ) const;
		int 				toInt( void ) const;
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		static Fixed		&min(Fixed &obj, Fixed &obj1);
		static const Fixed	&min(const Fixed &obj, const Fixed &obj1);
		static Fixed		&max(Fixed &obj, Fixed &obj1);
		static const Fixed	&max(const Fixed &obj, const Fixed &obj1);
};

std::ostream &operator<<(std::ostream &obj3, Fixed const &obj4);

#endif
