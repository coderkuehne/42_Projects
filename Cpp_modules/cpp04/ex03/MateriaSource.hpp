/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:43:08 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 16:53:53 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_knownMaterias[4];
		int			_numMaterias;
	public:
					MateriaSource();
					~MateriaSource();
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif