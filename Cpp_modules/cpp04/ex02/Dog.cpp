/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:56:47 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/08 13:51:22 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	setType("Dog");
	std::cout << "Constructor called " << _type << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Copy constructor called " << _type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor called " << _type << std::endl;
	delete _brain;
}

Dog		&Dog::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Dog *Dog::clone() const
{
	return (new Dog());
}

void	Dog::printBrainAddress()
{
	std::cout << &this->_brain << std::endl;
}