#include "HumanA.hpp"

HumanA::HumanA()
{
    std::cout << "HumanA Default Constructor Called" << std::endl;
}

HumanA::HumanA( std::string name, Weapon weapon ) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA Constructor Called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor Called" << std::endl;
}

void    HumanA::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
