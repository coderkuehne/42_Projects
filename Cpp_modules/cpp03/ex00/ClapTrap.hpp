/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:01:16 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/24 11:20:41 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class Claptrap
{
	public:
					Claptrap();
					Claptrap(const std::string &name);
					~Claptrap();
		Claptrap	&operator=(const Claptrap &other);
		std::string	getName(void) const;
		int			getHp(void) const;
		int			getEp(void) const;
		int			getAd(void) const;
		void		setHp(int value);
		void		setEp(int value);
		void		setAd(int value);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;
};

#endif