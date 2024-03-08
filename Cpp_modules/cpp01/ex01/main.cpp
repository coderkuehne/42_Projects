/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:44:13 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/17 14:13:05 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *horde = zombieHorde(N, "Hordecker");
	for (int i = 0; i < N; i++)
		horde[i].anounce();
	delete[] horde;

	N = 3;

	horde = zombieHorde(N, "3decker");
	for (int i = 0; i < N; i++)
		horde[i].anounce();
	delete[] horde;
	return (0);
}