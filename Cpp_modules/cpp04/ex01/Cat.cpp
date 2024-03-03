/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:49:36 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/03 16:02:25 by kekuhne          ###   ########.fr       */
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

Cat *Cat::clone() const
{
	return (new Cat());
}