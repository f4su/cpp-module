/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:11:10 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/25 15:04:52 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), is_signed(false), grade_to_sign(Form::min_grade), grade_to_execute(Form::max_grade)
{
	std::cout << "Form Default constructor called\n";
}

Form::Form(const Form &src) : name(src.getName()), is_signed(src.getIsSigned()), grade_to_sign(src.getGTS()), grade_to_execute(src.getGTE())
{
	std::cout << "Form Copy constructor called\n";
	*this = src;
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	std::cout << "Form Name constructor called\n";
	this->checkGrade();
}

Form::~Form()
{
	std::cout << "Form Destructor called\n";
}

Form	&Form::operator=(Form const & rhs)
{
	this->is_signed = rhs.getIsSigned();
	return (*this);
}

const std::string	&Form::getName(void)const
{
	return (this->name);
}

bool	Form::getIsSigned(void)const
{
	return (this->is_signed);
}

int	Form::getGTS(void)const /* getGradeToSign() */ /* but name was too long so wrote it shorter bcs i say so */
{
	return (this->grade_to_sign);
}

int	Form::getGTE(void)const /* getGradeToExecute() */ /* same as before idk */
{
	return (this->grade_to_execute);
}

void	Form::checkGrade(void)const
{
	if (this->grade_to_execute < Form::max_grade || this->grade_to_sign < Form::max_grade)
		throw (Form::GradeTooHighException());
	if (this->grade_to_execute > Form::min_grade || this->grade_to_sign > Form::min_grade)
		throw (Form::GradeTooLowException());
}

bool	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < this->grade_to_sign)
	{
		this->is_signed = true;
		return (true);
	}
	else
	{
		this->is_signed = false;
		return (false);
	}
}

std::ostream &	operator<<( std::ostream & ostr, Form const & instance)
{
	if (instance.getIsSigned() == true)
	{
		ostr << BOLD << instance.getName() << " Form must be signed with a grade of " << instance.getGTS() << " and executed with a grade of "
			<< instance.getGTE() << " and it's signed"CLOSE;
	}
	else
		ostr << BOLD << instance.getName() << " Form must be signed with a grade of " << instance.getGTS() << " and executed with a grade of "
			<< instance.getGTE() << " and it's not signed"CLOSE;
	return (ostr);
}
