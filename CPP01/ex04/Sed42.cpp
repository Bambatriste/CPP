#include "Sed42.hpp"

#include <iostream>
#include <string>

Sed42::Sed42(/* args */)
{
}

Sed42::~Sed42()
{
}

std::string Sed42::str_replace(std::string const &line, std::string const &search, std::string const &replace)
{
	std::string newline;
	int j = 0;

	for (int i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[j + i] == search[j] && j < search.length())
			j++;
		if (j == search.length())
		{
			newline += search;
			i += search.length();
		}
		else
			newline += line[i];
	}
	return (newline);
}

void	Sed42::replace(std::string const &filename, std::string const &search, std::string const &replace)
{
	std::ifstream file;
	std::ofstream file_out;
	std::string line;

	file.open(filename);
	file_out.open(filename + ".replace", std::ios::trunc);
	while (std::getline(file, line))
	{
		file_out << this->str_replace(line, search, replace);
		file_out << '\n';
	}
	file.close();
	file_out.close();
}



