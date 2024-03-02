/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:43:01 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 19:54:51 by Kekuhne          ###   ########.fr       */
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
		virtual			~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &other);
		virtual void	makeSound() const;
		std::string		getType() const;
		void			setType(const std::string &type);
};

#endif