#include "Zombie.hpp"

int main(void)
{
    Zombie* zList = 0;
    int     size = 10;
    //int     size = 0;
    //int     size = -1;

    if (size < 1)
    {
        std::cout << "Amount of zombies to allocate is out of scope" << std::endl;
        return 0;
    }
    zList = zombieHorde(size, "Living Dead");
    for (int i = 0; i < size; i++)
    {
        std::cout << "zombie " << i << ": ";
        zList[i].announce();
    }
    if (zList)
        delete[] zList;
    return 0;
}
