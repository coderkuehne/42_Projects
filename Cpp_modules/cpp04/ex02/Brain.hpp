/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:14:39 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/08 13:52:07 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

	class Brain
	{
		private:
			std::string _ideas[100];
		public:
				Brain();
				Brain(const Brain &other);
				~Brain();
		Brain	&operator=(const Brain &other);
	};

#endif