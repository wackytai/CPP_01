#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon( std::string name )
{
    this->setType(name);
}

Weapon::~Weapon()
{

}

std::string Weapon::getType( void )
{
    return this->_type;
}

void    Weapon::setType( std::string type)
{
    this->_type = type;
}
