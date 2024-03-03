/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:43:01 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/03 16:10:38 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
						WrongAnimal();
						WrongAnimal(const std::string &type);
						~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &other);
		void			makeSound() const;
		std::string		getType() const;
		void			setType(const std::string &type);
};

#endif