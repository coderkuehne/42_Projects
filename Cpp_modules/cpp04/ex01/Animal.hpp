/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:35:52 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/26 15:45:18 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
		Brain		*_brain;
	public:
						Animal();
						Animal(const std::string &type);
		virtual			~Animal();
		Animal			&operator=(const Animal &other);
		virtual void	makeSound() const;
		std::string		getType() const;
		void			setType(const std::string &type);
		void			printBrainAddress();
};

#endif