#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n"
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n";
}
void	Harl::info( void )
{
	std::cout << "[ INFO ]\n"
	<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n";
}
void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n"
	<< "I think I deserve to have some extra bacon for free.I’ve been coming for years whereas you started working here since last month.\n";
}
void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n"
	<< "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	for ( ; i < 4; i++)
		if (level == levels[i])
			break ;
	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << " [ Probably complaining about insignificant problemas ]" << std::endl;
			break;
	}
}
