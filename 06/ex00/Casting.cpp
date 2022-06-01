/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:25:21 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 17:34:25 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casting.hpp"

Casting::Casting()
{
	std::cout << "Casting Default constructor called\n";
	this->val_to_0();
}

Casting::Casting(const Casting &src)
{
	std::cout << "Casting Copy constructor called\n";
	*this = src;
}

Casting::~Casting()
{
	std::cout << "Casting Desctructor called\n";
}

Casting	&Casting::operator=(Casting const & rhs)
{
	this->type = rhs.type;
	this->s_char = rhs.s_char;
	this->s_int = rhs.s_int;
	this->s_float = rhs.s_float;
	this->s_double = rhs.s_double;
	return (*this);
}

void	Casting::check_input(char *str)
{
	std::string a(str);
	this->val_to_0();
	if (!a.compare(""))
		throw (Casting::NullIn());
	if (!getType(str))
		throw (Casting::WrongIn());
	this->save_type(str);
	this->print_results();
}

void	Casting::val_to_0(void)
{
	this->type = Casting::no_t;
	this->s_char = 0;
	this->s_int = 0;
	this->s_float = 0;
	this->s_double = 0;
}

bool	Casting::getType(char *str)
{
	this->type = check_special_type(str);
	if (this->type != Casting::no_t)
		return (true);
	if ((str[0] >= '0' && str[0] <= '9') || str[0] == '-' || str[0] == '.')
	{
		this->type = check_num_type(str);
		if (this->type != Casting::no_t)
			return (true);
	}
	if (str[1])
		return (false);
	this->type = Casting::char_t;
	return (true);
}

int		Casting::check_special_type(char *str)
{
	std::string a(str);

	if (!a.compare("inf") || !a.compare("+inf") ||!a.compare("-inf") ||!a.compare("nan"))
		return (Casting::double_t);
	else if (!a.compare("inff") || !a.compare("+inff") ||!a.compare("-inff") ||!a.compare("nanf"))
		return (Casting::float_t);
	else
		return (Casting::no_t);
}

int		Casting::check_num_type(char *str)
{
	int	i = 0;
	int	n_dot = 0;

	if (str[0] == '-' && str[1])
		i++;
	if (str[i] == '.' && (str[i + 1] == 'f' || str[i + 1] == 0))
		return (Casting::no_t);
	while (str[i] == '.' || isdigit(str[i]))
	{
		if (str[i] == '.')
			n_dot++;
		if (n_dot > 1)
			return (Casting::no_t);
		i++;
	}
	if (!str[i])
	{
		if (n_dot == 1)
			return (Casting::double_t);
		return (Casting::int_t);
	}
	else if (str[i] == 'f' && !str[i + 1] && n_dot == 1)
		return (Casting::float_t);
	return (Casting::no_t);
}

void	Casting::save_type(char *str)
{
	if (this->type == Casting::char_t)
		this->s_char = str[0];
	else if (this->type == Casting::int_t)
		this->s_int = atoi(str);
	else if (this->type == Casting::float_t)
		this->s_float = atof(str);
	else if (this->type == Casting::double_t)
		this->s_double = atof(str);
}

void	Casting::print_results(void)
{
	if (this->type == Casting::no_t)
		std::cout << BOLD"No type have been set\n"CLOSE;
	this->print_char();
	this->print_int();
	this->print_float();
	this->print_double();
}

void	Casting::print_char(void)
{
	if (this->type == Casting::char_t)
		std::cout << BOLD"char: '" << this->s_char << "'\n"CLOSE;
	if (this->type == Casting::int_t)
		if (check_char_cast(this->s_int))
			std::cout << BOLD"char: '" << static_cast<char>(this->s_int) << "'\n"CLOSE;
	if (this->type == Casting::float_t)
		if (check_char_cast(this->s_float))
			std::cout << BOLD"char: '" << static_cast<char>(this->s_float) << "'\n"CLOSE;
	if (this->type == Casting::double_t)
		if (check_char_cast(this->s_double))
			std::cout << BOLD"char: '" << static_cast<char>(this->s_double) << "'\n"CLOSE;
}

void	Casting::print_int(void)
{
	if (this->type == Casting::char_t)
		std::cout << BOLD"int: " << static_cast<int>(this->s_char) << "\n"CLOSE;
	if (this->type == Casting::int_t)
		std::cout << BOLD"int: " << this->s_int << "\n"CLOSE;
	if (this->type == Casting::float_t)
		if (check_int_cast(this->s_float))
			std::cout << BOLD"int: " << static_cast<int>(this->s_float) << "\n"CLOSE;
	if (this->type == Casting::double_t)
		if (check_int_cast(this->s_double))
			std::cout << BOLD"int: " << static_cast<int>(this->s_double) << "\n"CLOSE;
}

void	Casting::print_float(void)
{
	if (this->type == Casting::char_t)
		std::cout << BOLD"float: " << static_cast<float>(this->s_char) << ".0f\n"CLOSE;
	if (this->type == Casting::int_t)
			dot0(static_cast<float>(this->s_int), 1);
	if (this->type == Casting::float_t)
			dot0(static_cast<float>(this->s_float), 1);
	if (this->type == Casting::double_t)
		if (check_float_cast(this->s_double, 1))
			dot0(static_cast<float>(this->s_double), 1);
}

void	Casting::print_double(void)
{
	if (this->type == Casting::char_t)
		std::cout << BOLD"double: " << static_cast<double>(this->s_char) << ".0\n"CLOSE;
	if (this->type == Casting::int_t)
		std::cout << BOLD"double: " << static_cast<double>(this->s_int) << ".0\n"CLOSE;
	if (this->type == Casting::float_t)
			dot0(static_cast<double>(this->s_float), 0);
	if (this->type == Casting::double_t)
			dot0(static_cast<double>(this->s_double), 0);

}
