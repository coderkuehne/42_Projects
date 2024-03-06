/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:56:47 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 13:09:20 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	setType("Dog");
	std::cout << "Constructor called " << _type << std::endl;
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
		_brain = new Brain();
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