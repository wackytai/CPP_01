#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
    std::cout << _name << " with weapon " << _weapon.getType() << ": HumanA Constructor Called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << _name << " with weapon " << _weapon.getType() << ": HumanA Destructor Called" << std::endl;
}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void    HumanA::setWeapon( Weapon& weapon )
{
    _weapon = weapon;
}
