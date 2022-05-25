/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:27:46 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 19:53:15 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		typedef struct	s_fL
		{
			std::string	formName;
			Form		*formType;
		}				t_fL;
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern	&operator=(const Intern &rhs);
		Form	*makeForm(const std::string &formName, const std::string &target)const;

};

std::ostream	&operator<<( std::ostream &ostr, const Intern &instance );

#endif
