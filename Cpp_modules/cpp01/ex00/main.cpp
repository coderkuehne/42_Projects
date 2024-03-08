/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:44:13 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/17 13:31:50 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie z;
	Zombie x("Leon Kennedy");
	Zombie *y;
	
	z.anounce();
	x.anounce();
	y = newZombie("Rick Grimes");
	y->anounce();
	delete y;
	randomChump("Bustin Sider");
	return (0);
}