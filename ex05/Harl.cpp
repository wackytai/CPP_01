#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "debug\n";
}
void	Harl::info( void )
{
	std::cout << "info\n";
}
void	Harl::warning( void )
{
	std::cout << "warning\n";
}
void	Harl::error( void )
{
	std::cout << "error\n";
}
Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*pt[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*pt[i])();
			break ;
		}
	}
}
