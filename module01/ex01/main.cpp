#include "Zombie.hpp"

int main ()
{
    int N = 3;
    std::string name = "zombie";

    Zombie *horde = Zombie::zombieHorde(N, name);
    delete[] horde;
    return (0);
}