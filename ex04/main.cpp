#include "Replacer.hpp"

int	main( int argc, char **argv )
{
	Replacer	myReplacer;
	if (argc != 3)
		return 1;
	myReplacer.checkFile(argv[1], argv[2]);
	return 0;
}
