/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:59:14 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/23 13:04:02 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : Claptrap()
{
	setEp(100);
	setAd(30);
	std::cout << "FragTrap Default constructor called " << getName() << std::endl;
}

FragTrap::FragTrap(const std::string &name) : Claptrap(name)
{
	setEp(100);
	setAd(30);
	std::cout << "FragTrap constructor called " << getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called " << getName() << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << getName() << " : give it to me up here! *Holds up Arm*" << std::endl;
}