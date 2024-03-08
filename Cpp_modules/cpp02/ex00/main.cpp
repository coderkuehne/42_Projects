/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:47:04 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/23 13:06:56 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	c = b;

	a.setRawBits(4);
	b.setRawBits(2);
	std::cout << a.getRawBits() << b.getRawBits() << c.getRawBits() << std::endl;
	return (0);
}
