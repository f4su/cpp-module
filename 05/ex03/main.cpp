/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:23:07 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 20:19:50 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Form		*rrf;
	Bureaucrat	Migos("Migos", 40);
	
	std::cout << "\n";
	rrf = someRandomIntern.makeForm("inexistent", "Marcos");
	std::cout << "\n";
	if (rrf)
		delete (rrf);
	std::cout << "\n";
	rrf = someRandomIntern.makeForm("presidential pardon", "Luis");
	std::cout << "\n";
	if (rrf)
		delete (rrf);
	std::cout << "\n";
	rrf = someRandomIntern.makeForm("shrubbery creation", "CREATION");
	rrf->beSigned(Migos);
	rrf->execute(Migos);
	std::cout << "\n";
	if (rrf)
		delete (rrf);
	std::cout << "\n";
	rrf = someRandomIntern.makeForm("robotomy request", "Juan");
	rrf->beSigned(Migos);
	rrf->execute(Migos);
	rrf->beSigned(Migos);
	rrf->execute(Migos);
	rrf->beSigned(Migos);
	rrf->execute(Migos);
	rrf->execute(Migos);
	std::cout << "\n";
	if (rrf)
		delete (rrf);
	return (0);
}
