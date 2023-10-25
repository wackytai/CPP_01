#include "Replacer.hpp"

Replacer::Replacer() {}

Replacer::~Replacer() {}

int	Replacer::checkFile( std::string infile, std::string outfile )
{
	std::ifstream	myfile(infile.c_str(), std::ios::in);
	char			buffer;
	
	(void)outfile;
	if (!myfile.is_open())
		return print_error("Could not open file");
	while ( myfile )
	{
		buffer = myfile.get();
		std::cout << buffer;
	}
	/* for debug purposes */
	return 0;
}

int	Replacer::print_error( std::string str )
{
	std::cout << str << std::endl;
	return 1;
}
