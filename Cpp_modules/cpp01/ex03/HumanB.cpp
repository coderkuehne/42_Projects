/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:04:47 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 13:21:08 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : name("Default"), weaponptr(NULL)
{
	std::cout << name << ": Constructor called. Not yet Armed" << std::endl;
}
HumanB::HumanB(const std::string &name) : name(name), weaponptr(NULL)
{
	std::cout << name << ": Constructor called. Not yet Armed " << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << name << ": HumanB deconstructor called" << std::endl;
}

void HumanB::attack(void)
{
	if (!weaponptr)
		std::cout << name << " is unarmed!" << std::endl;
	else
		std::cout << name << " attacks with their " << weaponptr->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &ptr)
{
		weaponptr = &ptr;
		std::cout << name << " is now armed with " << weaponptr->getType() << std::endl;
}