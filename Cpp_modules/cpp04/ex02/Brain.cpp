/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:16:07 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 20:49:37 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		_ideas[i] = "idea " + std::to_string(i);
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