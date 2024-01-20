#include "Replacer.hpp"

/* int	main( int argc, char **argv )
{
	Replacer	myReplacer;
	if (argc != 4)
	{
		std::cout << "Usage: ./manipulator <filename> <string-to-find> <new-string>" << std::endl;
		return 1;
	}
	myReplacer.replace(argv[1], argv[2], argv[3]);
	return 0;
} */

int	main(void)
{
	Replacer	myReplacer;

	myReplacer.replace("test_simple", "abc", "def");
	myReplacer.replace("test_multiple", "123", "789");
	myReplacer.replace("test_no_match", "123", "456");
	myReplacer.replace("test_empty", "123", "456");
	myReplacer.replace("test_null", "123", "456");
	return (0);
}
