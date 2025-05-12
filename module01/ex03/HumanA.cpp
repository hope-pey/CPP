#include "HumanA.hpp"

void HumanA::attack() const
{
    std::cout << nameA << " attack with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &nameA, Weapon &weapon) : nameA(nameA), weapon(weapon)
{}



