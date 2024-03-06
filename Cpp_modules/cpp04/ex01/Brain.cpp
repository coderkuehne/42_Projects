/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:16:07 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 12:39:46 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		_ideas[i] = "idea ";
	std::cout << "Brian construceted" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructed" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if  (this != &other)
	{
		*_ideas = *other._ideas;
	}
	return (*this);
}