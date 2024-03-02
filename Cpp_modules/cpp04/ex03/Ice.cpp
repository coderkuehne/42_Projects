/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:03:07 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 17:05:13 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Materia constructed" << std::endl; 
}

Ice::~Ice()
{
	std::cout << "Ice Materia deconstructed" << std::endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "Ice: Shoots an ice bolt at " << target.getName() << std::endl;
}