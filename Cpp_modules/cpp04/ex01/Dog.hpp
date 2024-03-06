/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:56:11 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 12:53:08 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

	class Dog : public Animal 
	{
		private:
			Brain	*_brain;
		public:
					Dog();
					~Dog();
			Dog		&operator=(const Animal &other);
			void	makeSound() const;
			Dog 	*clone() const;
			void	printBrainAddress();
	};

#endif 