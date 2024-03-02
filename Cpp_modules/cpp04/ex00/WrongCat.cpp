/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:47:40 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 19:56:49 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	setType("WrongCat");
	std::cout << "Constructor called " << _type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "I hate Mondays" << std::endl;
}