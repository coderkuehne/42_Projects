/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:54:38 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 14:24:23 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &w) : name(name), weapon(w)
{
	std::cout << name << ": Constructor called Armed with: " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << name << ": HumanA deconstructor called" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}