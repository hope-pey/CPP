#include "Zombie.hpp"

// Allocates a zombie on the stack (automatic storage).
// The zombie is automatically destroyed at the end of the function.

void randomChump( std::string name )
{
    Zombie stack_zombie(name);
    stack_zombie.announce();
}
