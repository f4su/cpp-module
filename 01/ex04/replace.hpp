#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class sub	
{
	private:
		std::string		stringtoreplace;
		std::string		replacement;
		std::string		filename;
		std::ifstream	inputfile;
	public:
		sub(void);
		~sub(void);
		void	setfile(std::string file);
		void	replacefile(std::string stringtoreplace, std::string replacement);
};
#endif
