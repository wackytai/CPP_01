#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon Default Constructor Called" << std::endl;
}

Weapon::Weapon( std::string name )
{
    this->setType(name);
    std::cout << "Weapon Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Desstructor Called" << std::endl;
}

std::string Weapon::getType( void )
{
    return this->_type;
}

void    Weapon::setType( std::string type)
{
    this->_type = type;
}
