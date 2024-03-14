/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:45:47 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 17:46:01 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &other)
{
	std::cout << "AForm assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

void	AForm::setSigned(bool isSigned)
{
	this->_signed = isSigned;
}

int		AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int		AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

#include "Bureaucrat.hpp"

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream	&operator<<(std::ostream &os, const AForm &AForm)
{
	os << "AForm " << AForm.getName() << " is ";
	if (AForm.getSigned())
		os << "signed";
	else
		os << "not signed";
	os << " and requires grade " << AForm.getGradeToSign() << " to sign and grade " << AForm.getGradeToExecute() << " to execute";
	return (os);
}
