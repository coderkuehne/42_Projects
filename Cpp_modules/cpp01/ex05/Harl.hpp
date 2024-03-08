/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:53:17 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/16 11:05:32 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug();
		void info();
		void warning();
		void error();
};

#endif