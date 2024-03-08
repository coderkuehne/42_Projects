/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:53:02 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/18 20:04:24 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << " Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
		std::cout << " Deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : _value(other._value)
{
	std::cout << " Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << " Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other._value;
	return *this;
}

int Fixed::getRawBits() const
{
	//std::cout << " getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int value)
{
	//std::cout << " setRawBits member function called" << std::endl;
	_value = value;
}