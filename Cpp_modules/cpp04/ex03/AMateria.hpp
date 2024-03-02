/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:33:08 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/26 19:18:16 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string			_type;
	public:
							AMateria();
							AMateria(std::string const &type);
		virtual				~AMateria();
		std::string const	&getType() const;
		void				setType(const std::string &type);
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) = 0;
};
#endif