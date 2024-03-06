/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:42:14 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 13:11:13 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	std::cout << "Default constructor called: " << _type << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "constructer called: "<< _type << std::endl;
}

Animal::~Animal()
{
	std::cout << "deconstructor called " << _type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
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
