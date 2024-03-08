/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:45:07 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/11 18:45:44 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("default")
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(const std::string &name) : name(name)
{
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie deconstructor just killed "<< this->name << "!"<< std::endl;
}

void Zombie::anounce(void)
{
	std::cout << name << ": Brainzzzz...." << std::endl;
}
