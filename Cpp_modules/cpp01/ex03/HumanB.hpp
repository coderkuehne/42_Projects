/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:03:11 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 13:18:54 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
class HumanB
{
	public:
		HumanB();
		HumanB(const std::string &name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &ptr);
	private:
		const std::string name;
		Weapon* weaponptr;
};

#endif