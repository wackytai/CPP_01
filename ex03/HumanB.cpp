#include "HumanB.hpp"

HumanB::HumanB()
{
    std::cout << "HumanB Default Constructor Called" << std::endl;
}

HumanB::HumanB( std::string name ) : _name(name), _weapon(nullptr)
{
    std::cout << "HumanB Constructor Called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor Called" << std::endl;
}

void    HumanB::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon weapon )
{
    _weapon = &weapon;
}
