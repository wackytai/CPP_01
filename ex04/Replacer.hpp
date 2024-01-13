#ifndef REPLACER_HPP
# define REPLACER_HPP
# include <iostream>
# include <fstream>
# include <string>

class Replacer
{
	public:
		Replacer();
		~Replacer();
		int	replace( std::string infile, std::string s1, std::string s2 );
		int	print_error( std::string str );
};

#endif
