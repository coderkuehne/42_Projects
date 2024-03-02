/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:38:29 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/27 14:00:01 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"

	class IMateriaSource
	{
		public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria *) = 0;
			virtual AMateria *createMateria(std::string const &type) = 0;
	};

#endif