/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:24:44 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 13:10:06 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const int num_animals = 4;
	Animal* animals[num_animals];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	std::cout << std::endl;
	for (int i = 0; i < num_animals; ++i)
	{
		std::cout << animals[i]->getType() << " says ";
		animals[i]->makeSound();
		std::cout << "Adress of Brain: ";
		animals[i]->printBrainAddress();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < num_animals; ++i)
		delete animals[i];
	return (0);
}
