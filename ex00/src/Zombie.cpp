#include "../inc/Zombie.hpp"

Zombie::Zombie( ) : _name( "Zombie" )
{
    std::cout << _name << ": Default Constructor called" << std::endl;
}

Zombie::Zombie( std::string name ) : _name( name )
{
    std::cout << _name << ": Custom Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << ": Destructor called" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std:: endl;
}
