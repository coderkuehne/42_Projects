/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:35:52 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 12:49:57 by kekuhne          ###   ########.fr       */
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
	public:
						Animal();
						Animal(const std::string &type);
		virtual			~Animal();
		virtual Animal	&operator=(const Animal &other) = 0;
		virtual void	makeSound() const;
		std::string		getType() const;
		void			setType(const std::string &type);
		virtual void	printBrainAddress() = 0;
		virtual Animal	*clone() const = 0;
};
#endif