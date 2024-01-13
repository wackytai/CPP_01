#include "Replacer.hpp"

int	main( int argc, char **argv )
{
	Replacer	myReplacer;
	if (argc != 3)
		return 1;
	myReplacer.replace(argv[1], argv[2], argv[3]);
	return 0;
}
