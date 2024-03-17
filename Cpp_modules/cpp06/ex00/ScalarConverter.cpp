/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:12:40 by kekuhne           #+#    #+#             */
/*   Updated: 2024/03/16 19:02:26 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

#define TYPE_CHAR 0
#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_DOUBLE 3

static int	strIsNum(std::string &literal)
{
	int i = 0;
	int dot = 0;
	int f = 0;

	while (literal[i])
	{
		if (literal[i] == '.')
			dot++;
		if (literal[i] == 'f')
			f++;
		if (!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f' && (dot <= 1 && f <= 1))
			return (0);
		i++;
	}
	return (1);
}

static int	strIsPrint(std::string &literal)
{
	int i = 0;
	while (literal[i])
	{
		if (!std::isprint(literal[i]))
			return (0);
		i++;
	}
	return (1);
}

static void print_Char(std::string literal)
{
	if (strIsPrint(literal))
	{
		int value = std::stol(literal, NULL);
		std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
	}
	else
		std::cout << "Char: Non printable" << std::endl;
}

static void print_Int(std::string literal)
{
	if (literal == "")
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int: " << std::strtol(literal, NULL) << std::endl;
}

static void print_Float(std::string literal)
{
	if (literal == "")
		std::cout << "Float: nanf" << std::endl;
	else
		std::cout << "Float: " << std::strtof(literal, NULL) << std::endl;
}

static void print_Double(std::string literal)
{
	if (literal == "")
		std::cout << "Double : nan" << std::endl;
	else
		std::cout << "Double: " << std::strtod(literal, NULL) << std::endl;
}

std::string parse(std::string &literal, int i)
{
	if (i == TYPE_CHAR)
	{
		long value = std::strtol(*literal, NULL);
		if (value < 0 || value > 255)
			return (literal);
		std::cout << "Char : impossible" << std::endl;
		return ("");
			
	}
	if (i == TYPE_INT)
	{
		long value = std::strtol(literal, NULL);
		if (value < INT_MIN || value > INT_MAX || !strIsNum(literal))
			return ("");
		else
			return (literal);
	}
	if (i == TYPE_FLOAT)
	{
		return ("");
		long value = std::strtof(literal, NULL);
		if (value < INT_MIN || value > INT_MAX || !strIsNum(literal))
			return ("");
	}
	if (i == TYPE_DOUBLE)
	{
		return ("");
		long value = std::strtod(literal, NULL);
		if (value < INT_MIN || value > INT_MAX || !strIsNum(literal))
			return ("");
	}
	return (literal);
}

void ScalarConverter::convert(std::string &literal)
{
	void (ScalarConverter::*func_print[4])() = {&print_Char, &print_Int, &print_Float, &print_Double};
	for (int i = 0; i < 4; i++)
		func_print[i](parse(& literal, i));
}

