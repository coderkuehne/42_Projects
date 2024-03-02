/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:56:47 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 15:57:11 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	setType("Dog");
	std::cout << "Constructor called " << _type << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}