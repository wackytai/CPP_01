#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* z;

    z = new Zombie(name)[N];
    return z;
}