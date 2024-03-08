/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:59:00 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/16 11:20:23 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Default Constructor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl deconstructed" << std::endl;
}

void Harl::complain(std::string str)
{
	int level = 4;
	const std::string func[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < level; ++i)
	{
		if (str == func[i])
		{
			(this->*func_ptr[i])();
			return ;
		}
	}
	std::cout << "Unknown level: " << str << std::endl;
}

void Harl::debug()
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}