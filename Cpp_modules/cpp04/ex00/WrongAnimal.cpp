/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:45:03 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 19:45:38 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default")
{
	std::cout << "Default constructor called: " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "constructor called: "<< _type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "deconstructor called " << _type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Some generic sound" << std::endl;
}