#include "Weapon.hpp"

Weapon::Weapon( std::string name ) : _type(name)
{
    std::cout << getType() << ": Weapon Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << getType() << ": Weapon Desstructor Called" << std::endl;
}

const std::string Weapon::getType( void )
{
    return this->_type;
}

void    Weapon::setType( std::string type )
{
    this->_type = type;
}
