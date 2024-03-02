/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:50:40 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 17:06:34 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

	class Character : public ICharacter
	{
		private:
			std::string	_name;
			AMateria 	*_inventory[4];
			int			_onfloor;
			AMateria	*floor[];
		
		public:
						Character();
						Character(std::string const &name);
						~Character();
			Character	&operator=(const Character &other);
			std::string	const &getName() const;
			void		setName(const std::string &name);
			void		equip(AMateria *m);
			void		unequip(int idx);
			void		use(int idx, ICharacter &target);
	};
#endif