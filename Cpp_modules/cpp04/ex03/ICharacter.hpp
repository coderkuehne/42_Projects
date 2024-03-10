/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:57:32 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/10 19:52:38 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

	class ICharacter
	{
		public:
			virtual ~ICharacter() {}
			virtual std::string const &getName() const = 0;
			virtual void equip(AMateria *m) = 0;
			virtual void unequip(int idx) = 0;
			virtual AMateria *getInventory(int idx) const = 0;
			virtual void use(int idx, ICharacter &target) = 0;
	};

#endif
