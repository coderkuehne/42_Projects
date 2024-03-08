/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:34:41 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 14:24:14 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(const std::string &t);
		~Weapon();
		const std::string &getType() const;
		void setType(const std::string &t);
	private:
		std::string type;
		
};

#endif