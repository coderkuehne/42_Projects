/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:59:29 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 17:48:38 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Default constructor called: " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "copy constructor called: " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "constructer called: "<< _name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "deconstructor called " << _name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "Bureaucrat " << bureaucrat.getName() << " has grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getGradeToSign() >= _grade)
	{
		std::cout << _name << " signs " << form.getName() << std::endl;
		form.setSigned(true);
	}
	else
		std::cout << _name << " cannot sign " << form.getName() << " because grade is too low" << std::endl;
}