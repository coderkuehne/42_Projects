/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:47:49 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 12:52:26 by kekuhne          ###   ########.fr       */
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
					~Cat();
			Cat		&operator=(const Animal &other);
			void	makeSound() const;
			Cat 	*clone() const;
			void	printBrainAddress();
		};

#endif 