/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:20:03 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 17:04:48 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Materia constructed" << std::endl; 
}

Cure::~Cure()
{
	std::cout << "Cure Materia deconstructed" << std::endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "Cure: Heals " << target.getName() << " wounds "<< std::endl;
}