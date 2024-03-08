/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:40:52 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 14:25:21 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type("Arms")
{
	std::cout << "Default constructor called" << std::endl;
}

Weapon::Weapon(const std::string &t) : type(t)
{
	std::cout << "Constructor called Weapon type: " << type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "deconstructor called " << type << " destroyed" << std::endl;
}

const std::string &Weapon::getType(void) const 
{
	return(type);
}

void Weapon::setType(const std::string &t)
{
	type = t;
}
