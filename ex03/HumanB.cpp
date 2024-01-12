#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(0)
{
    std::cout << _name << ": HumanB Constructor Called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << _name << ": HumanB Destructor Called" << std::endl;
}

void    HumanB::attack( void )
{
    if (_weapon == 0)
    {
        std::cout << "Can't attack without a weapon!" << std::endl;
        return ;
    }
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon& weapon )
{
    _weapon = &weapon;
}
