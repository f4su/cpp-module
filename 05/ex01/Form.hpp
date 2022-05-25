/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:11:34 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 15:30:39 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		std::string			name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
		static const int	min_grade = 150;
		static const int	max_grade = 1;
	public:
		Form();
		Form(const Form &src);
		Form(const std::string &name, int grade_to_sign, int grade_to_execute);
		~Form();
		Form 				&operator=(Form const & rhs);
		const std::string	&getName(void)const;
		bool				getIsSigned(void)const;
		int					getGTS(void)const;
		int					getGTE(void)const;
		void				checkGrade(void)const;
		bool				beSigned(const Bureaucrat &bureaucrat);
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BOLD"Set grade too high but in Form class"CLOSE);
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BOLD"Set grade too low but in Form class"CLOSE);
				}
		};
}
;
std::ostream &	operator<<( std::ostream & ostr, Form const & instance);

#endif
