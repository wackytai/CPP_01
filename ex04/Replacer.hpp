#ifndef REPLACER_HPP
# define REPLACER_HPP
# include <iostream>
# include <fstream>
# include <string>

class Replacer
{
	private:
	public:
		Replacer();
		~Replacer();
		int	checkFile( std::string infile, std::string outfile );
};

#endif
