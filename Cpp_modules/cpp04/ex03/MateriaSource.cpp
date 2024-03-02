/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:38:36 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 17:04:13 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _numMaterias(0)
{
	for (int i = 0; i < 4; i++)
		_knownMaterias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _knownMaterias[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (_numMaterias < 4)
	{
		_knownMaterias[_numMaterias++] = m;
		std::cout << _numMaterias <<"/4 slots in use: Materia learned!" << std::endl;
	}
	else
	{
		std::cout << "4/4 slots in use: Cant learn Materia" << std::endl;
		delete m;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _numMaterias; ++i)
	{
		if (_knownMaterias[i]->getType() == type)
			return (_knownMaterias[i]->clone());
	}
	return (NULL);
}