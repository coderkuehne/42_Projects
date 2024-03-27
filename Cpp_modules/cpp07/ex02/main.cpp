/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:39:36 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/27 17:14:25 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>a(5);

	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = i;
	Array<float>b(10);

	for (unsigned int i = 0; i < b.size(); ++i)
		b[i] = 42.42f + i;

	Array<std::string>c(5);

	for (unsigned int i = 0; i < c.size(); ++i)
		c[i] = "Hello";
		
	std::cout << "Array a" << std::endl; 
	std::cout << "size : " << a.size() << std::endl; 
	std::cout << "a content: " << std::endl;
	for (unsigned int i = 0; i < a.size(); ++i)
		std::cout << "\t" << a[i] << std::endl;
	std::cout << "Testing Out of bounds exception" << std::endl;
	try
	{
		a[6] = 42;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout <<"Array b" << std::endl;  
	std::cout << "size : "<<  b.size() << std::endl;
	std::cout << "b content: " << std::endl;
	for (unsigned int i = 0; i < b.size(); ++i)
		std::cout << "\t" << b[i] << std::endl;
	std::cout << std::endl;


	std::cout << "Array c" << std::endl;
	std::cout << "size : " << c.size() << std::endl;
	std::cout << "c content: " << std::endl;
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << "\t" << c[i] << std::endl;
	std::cout << std::endl;
	return (0);
}
