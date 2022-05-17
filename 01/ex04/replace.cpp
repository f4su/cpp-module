#include "replace.hpp"

sub::sub(void)
{
}

sub::~sub(void)
{
}

void	sub::setfile(std::string file)
{
	if (!file.compare(""))
	{
		std::cout << "Error, file name can not be empty\n";
		exit (1);
	}
	this->inputfile.open(file, std::ios::in);
	if (!(this->inputfile))
	{
		std::cout << "Error, file doesnt exits\n";
		exit (1);
	}
	this->filename = file;
}

void	sub::replacefile(std::string stringtoreplace, std::string replacement)
{
	std::string		result;
	std::string		newfilename;
	std::ofstream	filecreate;
	size_t			i;
	size_t			j;

	j = 0;
	i  = stringtoreplace.length();
	newfilename = this->filename;
	if (!stringtoreplace.compare("") || !replacement.compare(""))
	{
		std::cout << "Error, strings cannot be empty\n";
		exit (1);
	}
	result.assign(std::istreambuf_iterator<char>(this->inputfile), std::istreambuf_iterator<char>());
	while (j < result.length())
	{
		if (result.compare(j, i, stringtoreplace) == 0)
		{
			result.erase(j, i);
			result.insert(j, replacement);
		}
		j++;
	}
	std::transform(newfilename.begin(), newfilename.end(), newfilename.begin(), ::toupper);
	newfilename += ".replace";
	filecreate.open(newfilename);
	filecreate << result;
}
