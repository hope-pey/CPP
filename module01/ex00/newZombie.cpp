#include "Zombie.hpp"

// zombie that lives outside the scope of the function
// Allocates a zombie on the heap using new.
// You must manually delete the zombie later to free memory.

Zombie* newZombie( std::string name )
{
    return (new Zombie(name));
}
