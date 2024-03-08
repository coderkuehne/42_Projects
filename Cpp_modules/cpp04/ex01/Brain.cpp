/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:16:07 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/08 13:51:58 by kekuhne          ###   ########.fr       */
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

Brain::Brain(const Brain &other)
{
	for(int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructed" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if  (this != &other)
	{
		for(int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}