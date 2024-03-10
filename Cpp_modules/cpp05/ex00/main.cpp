/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:17:10 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/08 16:49:20 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "----------------" << std::endl;
	try
	{
		Bureaucrat b1("Bureaucrat1", 1);
		std::cout << b1;
		b1.incrementGrade();
		std::cout << b1;
		b1.incrementGrade();
		std::cout << b1;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try
	{
		Bureaucrat b2("Bureaucrat2", 50);
		std::cout << b2;
		b2.setGrade(150);
		std::cout << b2;
		b2.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}