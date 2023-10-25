#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	myHarl;
	if (argc != 2)
		return 1;
	myHarl.complain(argv[1]);
	return 0;
}
