/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:56:47 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/03 16:18:47 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	setType("Dog");
	std::cout << "Constructor called " << _type << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Dog *Dog::clone() const
{
	return (new Dog());
}