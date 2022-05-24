/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:22:59 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/24 14:34:48 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

# include <iostream>
# include <stdexcept>

class	Bureaucrat
{
	private:
		std::string			name;
		int					grade;
		static const int	min_grade = 150;
		static const int	max_grade = 1;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const & rhs);
		const std::string	&getName(void)const;
		int					getGrade(void)const;
		void				incrementGrade(int zenbat);
		void				decrementGrade(int zenbat);
		void				checkGrade(void)const;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BOLD"Set grade too high"CLOSE);
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BOLD"Set grade too low"CLOSE);
				}
		};
};

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance);

#endif
