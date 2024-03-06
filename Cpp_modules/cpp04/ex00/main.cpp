/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:24:44 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 12:26:39 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    Animal *meta = new Animal();
    Animal *j = new Dog();
    Animal *i = new Cat();
    std::cout << j->getType() << ": ";
	j->makeSound();
    std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << "Animal : ";
	meta->makeSound();
    std::cout << "\nWrong Animal" << std::endl;
    WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << ": ";
    wrongCat->makeSound();
	delete meta;
	delete i;
	delete j;
	delete wrongCat;
    return (0);
}