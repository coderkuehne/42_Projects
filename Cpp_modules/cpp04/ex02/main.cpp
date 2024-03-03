/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:24:44 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/03 16:21:29 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int num_animals = 4;
	Animal* animals[num_animals];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = animals[1]->clone();

	for (int i = 0; i < num_animals; ++i)
	{
		animals[i]->makeSound();
		animals[i]->printBrainAddress();
	}
	for (int i = 0; i < num_animals; ++i)
		delete animals[i];
	return (0);
}
