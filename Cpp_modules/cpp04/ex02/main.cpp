/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:24:44 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/26 15:47:24 by Kekuhne          ###   ########.fr       */
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
	animals[3] = new Cat();

	for (int i = 0; i < num_animals; ++i)
	{
		animals[i]->makeSound();
		animals[i]->printBrainAddress();
	}
	for (int i = 0; i < num_animals; ++i)
		delete animals[i];
	return (0);
}
