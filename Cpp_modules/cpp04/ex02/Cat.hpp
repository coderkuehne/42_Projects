/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:47:49 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/08 13:50:30 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

	class Cat : public Animal 
	{
		private:
			Brain	*_brain;
		public:
					Cat();
					Cat(const Cat &other);
					~Cat();
			Cat		&operator=(const Animal &other);
			void	makeSound() const;
			Cat 	*clone() const;
			void	printBrainAddress();
		};

#endif 