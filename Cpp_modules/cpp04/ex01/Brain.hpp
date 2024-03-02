/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:14:39 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/25 20:38:05 by Kekuhne          ###   ########.fr       */
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
				~Brain();
		Brain	&operator=(const Brain &other);
	};

#endif