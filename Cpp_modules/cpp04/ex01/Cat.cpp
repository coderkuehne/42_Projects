/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:49:36 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 15:53:44 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	setType("Cat");
	std::cout << "Constructor called " << _type << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}