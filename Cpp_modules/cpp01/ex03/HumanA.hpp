/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:49:16 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 14:21:03 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
class HumanA
{
	public:
		HumanA(const std::string &name, const Weapon &w);
		~HumanA();
		void attack();
	private:
		const std::string name;
		const Weapon &weapon;
};

#endif