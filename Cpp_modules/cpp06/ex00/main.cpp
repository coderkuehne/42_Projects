/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:52:28 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/16 15:54:55 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc < 2 || argc > 2)
		std::cout << "Error : Argument Count" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return (0);
}