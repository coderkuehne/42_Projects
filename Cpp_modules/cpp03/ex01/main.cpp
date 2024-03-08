/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:54:00 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/23 12:55:53 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	// Creating a ScavTrap
	Claptrap Clap("Nu-11");
	std::cout << Clap.getName() << " stats" << std::endl;
	std::cout << "Hp  " << Clap.getHp() << std::endl;
	std::cout << "Ep  " << Clap.getEp() << std::endl;
	std::cout << "Ad  " << Clap.getAd() << std::endl;
	std::cout << "--- Creating a ScavTrap ---" << std::endl;
	ScavTrap Scav("Wally");

	std::cout << Scav.getName() << " stats" << std::endl;
	std::cout << "Hp  " << Scav.getHp() << std::endl;
	std::cout << "Ep  " << Scav.getEp() << std::endl;
	std::cout << "Ad  " << Scav.getAd() << std::endl;
	Scav.guardGate();
	Scav.attack(Clap.getName());
	Clap.takeDamage(Scav.getAd());
	Clap.attack(Scav.getName());
	Scav.takeDamage(Clap.getAd());
	Scav.beRepaired(Clap.getAd());

	return (0);
}