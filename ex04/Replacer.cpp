#include "Replacer.hpp"

Replacer::Replacer() {}

Replacer::~Replacer() {}

int	Replacer::checkFile( std::string infile, std::string outfile )
{
	std::ifstream	myfile (infile);
	char			buffer;
	
	if (myfile.is_open())
		while ( myfile )
			buffer = myfile.get();
	/* for debug purposes */
	std::cout << buffer << std::endl;
}
