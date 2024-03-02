/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:42:14 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/26 15:43:13 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Animal::Animal() : _type("Default"), _brain(new Brain)
{
	std::cout << "Default constructor called: " << _type << std::endl;
}

Animal::Animal(const std::string &type) : _type(type),  _brain(new Brain)
{
	std::cout << "constructor called: "<< _type << std::endl;
}

Animal::~Animal()
{
	delete _brain;
	std::cout << "deconstructor called " << _type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		_brain = other._brain;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void	Animal::setType(const std::string &type)
{
	_type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Some generic sound" << std::endl;
}

void	Animal::printBrainAddress()
{
	std::cout << &this->_brain << std::endl;
}