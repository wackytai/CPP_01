#include "../inc/Zombie.hpp"

int main( void )
{
    Zombie*  myZombie;

    myZombie = newZombie("Bogeyman");
    myZombie->announce();
    randomChump("Chump");
    delete (myZombie);
}
