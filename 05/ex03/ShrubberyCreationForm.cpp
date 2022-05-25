/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:10:51 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 18:37:23 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("")
{
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form("ShrubberyCreationForm", 145, 137), target(src.getTarget())
{
	std::cout << "ShrubberyCreationForm Copy constructor called\n";
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm Name constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	rhs.getTarget();
	return (*this);
}

const std::string	&ShrubberyCreationForm::getTarget(void)const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)const
{
	std::ofstream	file;
	std::string		fileName = this->target + "_shrubbery";

	this->checkExec(executor);
	std::cout << BOLD"Created the shrug into " << fileName <<"\n"CLOSE;
	file.open(fileName.c_str(), std::ios::out);
 	file << "                                             .         ;  " << "\n";
 	file << "                .              .              ;%     ;;   " << "\n";
 	file << "                  ,           ,                :;%  %;   " << "\n";
 	file << "                   :         ;                   :;%;'     .,   " << "\n";
 	file << "          ,.        %;     %;            ;        %;'    ,;" << "\n";
 	file << "            ;       ;%;  %%;        ,     %;    ;%;    ,%'" << "\n";
 	file << "             %;       %;%;      ,  ;       %;  ;%;   ,%;' " << "\n";
 	file << "              ;%;      %;        ;%;        % ;%;  ,%;'" << "\n";
 	file << "               `%;.     ;%;     %;'         `;%%;.%;'" << "\n";
 	file << "                `:;%.    ;%%. %@;        %; ;@%;%'" << "\n";
 	file << "                   `:%;.  :;bd%;          %;@%;'" << "\n";
 	file << "                     `@%:.  :;%.         ;@@%;'   " << "\n";
 	file << "                       `@%.  `;@%.      ;@@%;         " << "\n";
 	file << "                         `@%%. `@%%    ;@@%;        " << "\n";
 	file << "                           ;@%. :@%%  %@@%;       " << "\n";
 	file << "                             %@bd%%%bd%%:;     " << "\n";
 	file << "                               #@%%%%%:;;" << "\n";
 	file << "                               %@@%%%::;	" << "\n";
 	file << "                               %@@@%(o);  . '         " << "\n";
 	file << "                               %@@@o%;:(.,'         " << "\n";
 	file << "                           `.. %@@@o%::;         " << "\n";
 	file << "                              `)@@@o%::;        " << "\n";
 	file << "                               %@@(o)::;        " << "\n";
 	file << "                              .%@@@@%::;         " << "\n";
 	file << "                              ;%@@@@%::;.          " << "\n";
 	file << "                             ;%@@@@%%:;;;. " << "\n";
 	file << "                         ...;%@@@@@%%:;;;;,.." << "\n";
	file.close();
}
