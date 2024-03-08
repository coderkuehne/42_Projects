/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:54:00 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/23 13:02:49 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	Claptrap Clap("Nu-11");
	std::cout << Clap.getName() << " stats" << std::endl;
	std::cout << "Hp  " << Clap.getHp() << std::endl;
	std::cout << "Ep  " << Clap.getEp() << std::endl;
	std::cout << "Ad  " << Clap.getAd() << std::endl;
	std::cout << "--- Creating a FragTrap ---" << std::endl;
	FragTrap Frag("Wally");

	std::cout << Frag.getName() << " stats" << std::endl;
	std::cout << "Hp  " << Frag.getHp() << std::endl;
	std::cout << "Ep  " << Frag.getEp() << std::endl;
	std::cout << "Ad  " << Frag.getAd() << std::endl;
	Frag.highFiveGuys();
	Frag.attack(Clap.getName());
	Clap.takeDamage(Frag.getAd());
	Clap.attack(Frag.getName());
	Frag.takeDamage(Clap.getAd());
	Frag.beRepaired(Clap.getAd());

	return (0);
}