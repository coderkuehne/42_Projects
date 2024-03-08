/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kekuhne <kekuehne@student.42wolfsburg.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:45:48 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/02/13 14:57:27 by Kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::ifstream inputFile(filename);
	if (!inputFile)
	{
		std::cerr << "Error: Unable to open input file " << filename << std::endl;
		return ;
	}
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile)
	{
		std::cerr << "Error: Unable to create output file " << filename << ".replace" << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outputFile << line << std::endl;
	}
	std::cout << "Replacement completed. Check " << filename << ".replace" << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	replaceInFile(argv[1], argv[2], argv[3]);
	return (0);
}
