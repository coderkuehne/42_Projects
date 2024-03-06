/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:49:36 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 13:09:32 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
	setType("Cat");
	std::cout << "Constructor called " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor called " << _type << std::endl;
	delete _brain;
}

Cat		&Cat::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other.getType();
		_brain = new Brain();
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

Cat *Cat::clone() const
{
	return (new Cat());
}

void	Cat::printBrainAddress()
{
	std::cout << &this->_brain << std::endl;
}
