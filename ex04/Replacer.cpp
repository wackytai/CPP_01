#include "Replacer.hpp"

Replacer::Replacer() {}

Replacer::~Replacer() {}

int	Replacer::replace( std::string infile, std::string s1, std::string s2 )
{
	std::ifstream	in;
	std::ofstream	out;
	std::string		buffer;
	std::size_t		len = s1.length();
	std::size_t		i;

	
	in.open(infile.c_str(), std::ios::in);
	if (!in.is_open())
		return print_error("Could not open infile");
	out.open((infile + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!out.is_open())
		return print_error("Could not open outfile");
	while (getline(in, buffer))
	{
		i = buffer.find(s1, 0);
		while (i != std::string::npos)
		{
			buffer.erase(i, len);
			buffer.insert(i, s2);
			i = buffer.find(s1, 0);
		}
		out << buffer << std::endl;
	}
	in.close();
	out.close();
	return 0;
}

int	Replacer::print_error( std::string str )
{
	std::cout << str << std::endl;
	return 1;
}
