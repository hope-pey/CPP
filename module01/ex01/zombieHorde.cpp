#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    (void)name;
    int i = 0;
    Zombie *horde = new Zombie[N];
    while (i < N)
    {
        std::cout << name << i;
        horde[i].announce();
        i++;
    }
    return (horde);
}