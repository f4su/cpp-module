/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:12:23 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 17:24:11 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTING_HPP
# define CASTING_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <stdexcept>
# include <limits>
# include <cmath>

class	Casting
{
	private:
		int		type;
		char	s_char;
		int		s_int;
		float	s_float;
		double	s_double;
		static const int	no_t = -1;
		static const int	char_t = 0;
		static const int	int_t = 1;
		static const int	float_t = 2;
		static const int	double_t = 3;
	public:
		Casting();
		Casting(const Casting &src);
		~Casting();
		Casting		&operator=(Casting const & rhs);
		void		check_input(char *str);
		void		val_to_0(void);
		bool		getType(char *str);
		int			check_special_type(char *str);
		int			check_num_type(char *str);
		void		save_type(char *str);
		void		print_results(void);
		void		print_char(void);
		void		print_int(void);
		void		print_float(void);
		void		print_double(void);
	public:
		class	NoIn : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return (BOLD"No input to work with"CLOSE);
				}
		};
		class	NullIn : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return (BOLD"Input cannot be null"CLOSE);
				}
		};
		class	WrongIn : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return (BOLD"Input is invalid"CLOSE);
				}
		};
};

static inline void	EOL(void)
{
	std::cout << "\n";
}

static inline bool	check_char_cast(double n)
{
	if (n - static_cast<int>(n) != 0 || n > 127 || n < 0)
	{
		std::cout << BOLD"char: impossible\n"CLOSE;
		return (false);
	}
	else if (n <= 31 || n == 127)
	{
		std::cout << BOLD"char: Non displayable\n"CLOSE;
		return (false);
	}
	return (true);
}

static inline bool	check_int_cast(double n)
{
	if (n <= std::numeric_limits<int>::max()
			&& n >= std::numeric_limits<int>::min()
			&& n != std::numeric_limits<double>::infinity()
			&& n != -std::numeric_limits<double>::infinity()
			&& n != std::numeric_limits<double>::quiet_NaN())
		return (true);
	std::cout << BOLD"int: impossible\n"CLOSE;
	return (false);
}

static inline bool	check_float_cast(double n, int i)
{
	if ((n <= std::numeric_limits<float>::max()
			&& n >= -std::numeric_limits<float>::max())
			|| n == std::numeric_limits<double>::infinity()
			|| n == -std::numeric_limits<double>::infinity()
			|| std::isnan(n))
		return (true);
	if (i == 1)
		std::cout << BOLD"float: impossible\n"CLOSE;
	return (false);
}

static inline void	dot0(double n, int i)
{
	if (i == 1)
	{
		if (n - static_cast<int>(n) == 0.0)
			std::cout << BOLD"float: " << n << ".0f\n"CLOSE;
		else
			std::cout << BOLD"float: " << n << "f\n"CLOSE;
	}
	else
	{
		if (n - static_cast<int>(n) == 0.0)
			std::cout << BOLD"double: " << n << ".0\n"CLOSE;
		else
			std::cout << BOLD"double: " << n << "\n"CLOSE;
	}
}
#endif
