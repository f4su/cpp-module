/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:13:34 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/26 19:58:04 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): n(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj1)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = obj1;
}

Fixed::Fixed(const int value)
{
//	std::cout << "Int constructor called" << std::endl;
	this->n = value << this->nb_bits;
}

Fixed::Fixed(const float value)
{
//	std::cout << "Float constructor called" << std::endl;
	this->n = roundf(value * pow(2, this->nb_bits));
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &obj2)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->n = obj2.n;
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (this->n);
}

void	Fixed::setRawBits( int const raw )
{
	this->n = raw;
}

float	Fixed::toFloat( void ) const
{
	return (((float)this->n / pow(2, this->nb_bits)));
}

int	Fixed::toInt( void ) const
{
	return(this->n >> this->nb_bits);
}

std::ostream &operator<<(std::ostream &obj3, Fixed const &obj4)
{
	obj3 << obj4.toFloat();
	return (obj3);
}

bool	Fixed::operator>(const Fixed &obj2) const
{
	return (this->getRawBits() > obj2.getRawBits());
}

bool	Fixed::operator<(const Fixed &obj2) const
{
	return (obj2 > *this);
}

bool	Fixed::operator>=(const Fixed &obj2) const
{
	return (!(*this < obj2));
}

bool	Fixed::operator<=(const Fixed &obj2) const
{
	return (!(*this > obj2));
}

bool	Fixed::operator==(const Fixed &obj2) const
{
	return (this->getRawBits() == obj2.getRawBits());
}

bool	Fixed::operator!=(const Fixed &obj2) const
{
	return (!(*this == obj2));
}

Fixed	Fixed::operator+(const Fixed &obj2) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + obj2.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &obj2) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - obj2.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &obj2) const
{
	return (this->toFloat() * obj2.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj2) const
{
	return (this->toFloat() / obj2.toFloat());
}

Fixed & Fixed::operator++(void)
{
	this->n++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	a(*this);

	++(*this);
	return (a);
}

Fixed & Fixed::operator--(void)
{
	this->n--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	a(*this);

	--(*this);
	return (a);
}

Fixed	&Fixed::min(Fixed &obj, Fixed &obj1)
{
	if (obj < obj1)
		return (obj);
	return (obj1);
}

const Fixed	&Fixed::min(const Fixed &obj, const Fixed &obj1)
{
	if (obj < obj1)
		return (obj);
	return (obj1);
}

Fixed	&Fixed::max(Fixed &obj, Fixed &obj1)
{
	if (obj < obj1)
		return (obj1);
	return (obj);
}

const Fixed	&Fixed::max(const Fixed &obj, const Fixed &obj1)
{
	if (obj < obj1)
		return (obj1);
	return (obj);
}
