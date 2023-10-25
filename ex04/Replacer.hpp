#ifndef REPLACER_HPP
# define REPLACER_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

class Replacer
{
	private:
	public:
		Replacer();
		~Replacer();
		int	checkFile( std::string infile, std::string outfile );
		int	print_error( std::string str );
};

#endif
