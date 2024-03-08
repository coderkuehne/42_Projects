/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:37:00 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/22 21:08:55 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : Claptrap()
{
	setEp(50);
	setAd(20);
	std::cout << "ScavTrap Default constructor called " << getName() << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : Claptrap(name)
{
	setEp(50);
	setAd(20);
	std::cout << "ScavTrap constructor called " << getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called " << getName() << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gatekeeper mode." << std::endl;
}
