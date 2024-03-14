/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:16:51 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/13 16:33:04 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	else if (getSigned() == false)
		throw FormNotSignedException();
	std::ofstream file;
	file.open(_target + "_shrubbery");
	file << std::endl;
	file << "      **      " << std::endl;
	file << "     ****     " << std::endl;
	file << "    ******    " << std::endl;
	file << "   ********   " << std::endl;
	file << "  **********  " << std::endl;
	file << " ************ " << std::endl;
	file << "**************" << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << std::endl;
	file.close();
}
