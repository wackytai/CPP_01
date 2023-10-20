#include "Zombie.hpp"

int main(void)
{
    Zombie* zList;
    int     size = 10;

    zList = zombieHorde(size, "Living Dead");
    for (int i = 0; i < size; i++)
    {
        std::cout << "zombie " << i << ": ";
        zList[i].announce();
    }
    delete[] zList;
    return 0;
}
