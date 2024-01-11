#include "../inc/Zombie.hpp"

Zombie::Zombie( ) : _name("Default")
{
    std::cout << this->_name << ": Custom Constructor called" << std::endl;
}

Zombie::Zombie( std::string name )
{
    std::cout << this->_name << ": Custom Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": Destructor called" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std:: endl;
}
