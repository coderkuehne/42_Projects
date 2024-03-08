/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:45:21 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/11 18:08:50 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie();
		void anounce(void);
	private:
		const std::string name;
};
Zombie * newZombie(std::string name);
void randomChump(std::string name);

#endif