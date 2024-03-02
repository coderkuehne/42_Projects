/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:50:44 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 17:04:27 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "cstdlib"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLOOR_SIZE; ++i)
		floor[i] = NULL;
	_onfloor = 0;
	std::cout << "Default Character constructed : " << std::endl; 
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	for (int i = 0; i < MAX_FLOOR_SIZE; ++i)
		floor[i] = NULL;
	_onfloor = 0;
	std::cout << "Character constructed : " << _name << std::endl; 

}
Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete _inventory[i];
	for (int i = 0; i < _onfloor; ++i)
		delete floor[i];
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

void	Character::equip(AMateria *m) 
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << i <<"/4 Materia Slots in use: Materia equiped" << std::endl;
			return ;
		}
	}
	std::cout << "Slots Full putting on Floor" << std::endl;
	floor[_onfloor++] = m;
}

void	Character::unequip(int idx) 
{
	if (idx >= 0 && idx < 4)
	{
		floor[_onfloor++] = _inventory[idx];
		_inventory[idx] = NULL;
		std::cout << idx << " is now an empty slot" << std::endl;
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
