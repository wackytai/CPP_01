#include "Zombie.hpp"

Zombie::Zombie(): _name ("zombie")
{
    std::cout << this->_name << ": Default Constructor called" << std::endl;
}

Zombie::Zombie( std::string name ) : _name( name )
{
    std::cout << this->_name << ": Custom Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << ": Destructor called" << std::endl;
}

void    Zombie::setName( std::string str )
{
    _name = str;
}

 void    Zombie::announce( void )
 {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std:: endl;
 }
