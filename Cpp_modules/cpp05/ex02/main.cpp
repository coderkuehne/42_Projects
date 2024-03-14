/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:17:10 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/13 18:44:02 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	int nbr_forms = 3;
	Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);
	AForm *form[nbr_forms];
	form[0] = new ShrubberyCreationForm("Home");
	form[1] = new RobotomyRequestForm("Bender");
	form[2] = new PresidentialPardonForm("Zaphod Beeblebrox");

	for (int i = 0; i < nbr_forms; i++)
	{
		bureaucrat->signForm(*form[i]);
		bureaucrat->executeForm(*form[i]);
	}

	bureaucrat->setGrade(150);
	for (int i = 0; i < nbr_forms; i++)
	{
		form[i]->setSigned(false);
	}

	for (int i = 0; i < nbr_forms; i++)
	{
		bureaucrat->signForm(*form[i]);
		bureaucrat->executeForm(*form[i]);
	}

	delete bureaucrat;
	for (int i = 0; i < nbr_forms; i++)
		delete form[i];
	return (0);
}