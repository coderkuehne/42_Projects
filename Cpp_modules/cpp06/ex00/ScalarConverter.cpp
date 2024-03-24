/* ************************************************************************** */
/*                                                                            */

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
		if ((!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f') || (dot > 1 || f > 1))
			return (0);
		i++;
	}
	return (1);
}


static void print_Char(std::string literal)
{
  if (literal == "" || literal == "nan" || literal == "inf")
  {
    std::cout << "Char : impossible" << std::endl;
    return ;
  }
	int value = atoi(literal.c_str());
	if (std::isprint(value))
		std::cout << "Char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "Char: Non printable" << std::endl;
}

static void print_Int(std::string literal)
{
	if (literal == "")
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int: " << atoi(literal.c_str()) << std::endl;
}

static void print_Float(std::string literal)
{
  float value = atof(literal.c_str());
	if (literal == "" || literal == "nan")
		std::cout << "Float: nanf" << std::endl;
  else if (literal == "-inf" || literal == "+inf" || literal == "inf")
      std::cout << "Float: " << literal << std::endl;
	else
  {
    std::ostringstream oss;
    oss << std::fixed << value;
    std::string _value = oss.str();
    std::cout << "Float: " << _value << "f" << std::endl;
  }
}

static void print_Double(std::string literal)
{
  double value = strtod(literal.c_str(), NULL);
	if (literal == "" || literal == "nan")
		std::cout << "Double : nan" << std::endl;
	else if (literal == "-inf" || literal == "+inf" || literal == "inf")
      std::cout << "Double: " << literal << std::endl;
	else
  {
    std::ostringstream oss;
    oss << std::fixed << value;
    std::string _value = oss.str();
    std::cout << "Double: " << _value << std::endl;
  }
}

std::string parse(std::string &literal, int i)
{
	if (i == TYPE_CHAR)
	{
		long value = atoi(literal.c_str());
		if (value > 0 && value < 255)
			return (literal);
		return ("");
			
	}
	if (i == TYPE_INT)
	{
		long value = atoi(literal.c_str());
		if (value < INT_MIN || value > INT_MAX || !strIsNum(literal))
			return ("");
		else
			return (literal);
	}
	if (i == TYPE_FLOAT)
	{
   	 if (literal == "nan" || literal == "+inf" || literal == "-inf" || literal == "inf")
      return (literal);
	  float value = atof(literal.c_str());
		if (value > FLT_MAX || value < -FLT_MAX || !strIsNum(literal))
			return ("");
	}
	if (i == TYPE_DOUBLE)
	{
     if (literal == "nan" || literal == "+inf" || literal == "-inf" || literal == "inf")
      return (literal);
	  double value = strtod(literal.c_str(), NULL);	
		if (value > DBL_MAX || value < -DBL_MAX || !strIsNum(literal))
			return ("");
	}
	return (literal);
}

void ScalarConverter::convert(std::string &literal)
{
  print_Char(parse(literal, TYPE_CHAR));
  print_Int(parse(literal, TYPE_INT));
  print_Float(parse(literal, TYPE_FLOAT));
  print_Double(parse(literal, TYPE_DOUBLE));
}

