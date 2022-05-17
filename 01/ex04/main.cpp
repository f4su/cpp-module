#include "replace.hpp"

int	main(int argc, char **argv)
{
	sub	sub;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	sub.setfile(argv[1]);
	sub.replacefile(argv[2], argv[3]);
	return (0);
}
