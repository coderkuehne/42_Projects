/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:51:59 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/24 14:55:07 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : value_(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Data::Data(int value) : value_(value) 
{
	std::cout << "Parametric constructor called" << std::endl;
}

Data::~Data() 
{
	std::cout << "Destructor called" << std::endl;
}

Data &Data::operator=(Data const &other) 
{
	std::cout << "Assignation operator called" << std::endl;
	value_ = other.value_;
	return *this;
}

int Data::getValue() const 
{
	return value_;
}

void Data::setValue(int value) 
{
	value_ = value;
}

