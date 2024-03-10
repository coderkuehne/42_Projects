/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:17:10 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 17:49:04 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

int main()
{
	// Create a Bureaucrat with a grade that is too low to sign the form
	Bureaucrat bureaucrat1("John", 150);
	Form form1("Form1", 100, 50);
	std::cout << form1 << std::endl;
	bureaucrat1.signForm(form1);
	std::cout << form1 << std::endl;

	// Create a Bureaucrat with a grade that is equal to the minimum grade required to sign the form
	Bureaucrat bureaucrat2("Jane", 50);
	Form form2("Form2", 50, 30);
	std::cout << form2 << std::endl;
	bureaucrat2.signForm(form2);
	std::cout << form2 << std::endl;

	// Create a Bureaucrat with a grade that is lower than the minimum grade required to sign the form
	Bureaucrat bureaucrat3("Mike", 30);
	Form form3("Form3", 40, 20);
	std::cout << form3 << std::endl;
	bureaucrat3.signForm(form3);
	std::cout << form3 << std::endl;

	return (0);
}