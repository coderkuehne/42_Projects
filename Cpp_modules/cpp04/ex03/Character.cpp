/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:50:44 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 20:52:52 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "cstdlib"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	std::cout << "Default Character constructed : " << std::endl;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	std::cout << "Character constructed : " << _name << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete _inventory[i];
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; ++i)
		{
			delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string	const &Character::getName() const
{
	return (_name);
}

void	Character::setName(const std::string &name)
{
	_name = name;
}

AMateria	*Character::getInventory(int idx) const
{
	if (idx >= 0 && idx < 4)
		return (_inventory[idx]);
	else
		return (NULL);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout<< m->getType()<< ": " << i + 1 <<"/4 Materia Slots in use: Materia equiped" << std::endl;
			return ;
		}
	}
	std::cout << m->getType() << ": "<< "Slots Full putting on Floor" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		std::cout << _inventory[idx]->getType() << ": " << idx << " is now an empty slot" << std::endl;
		_inventory[idx] = NULL;
	}
	else
		std::cout << idx << " invalid slot" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
			_inventory[idx]->use(target);
	else
		std::cout << idx<< ": Cant use no Materia in slot" << std::endl;
}
