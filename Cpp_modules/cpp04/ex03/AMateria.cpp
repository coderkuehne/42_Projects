/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:33:11 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 16:59:44 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) :_type(type)
{
	std::cout << "AMateria consturcted with type of : " << _type << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria deconstructed, type : " << _type << std::endl;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::setType(const std::string &type)
{
	_type = type;
}