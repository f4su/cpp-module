#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	size_t	j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (argv[++i])
		{
			std::string s(argv[i]);
			j = -1;
			while (++j < s.length())
				std::cout << (char)std::toupper(s[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
