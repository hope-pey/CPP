#include "HumanB.hpp"

void HumanB::attack() const
{
    if (weapon)
        std::cout << nameB << " attack with their " << weapon->getType() << std::endl;
    else
        std::cout << nameB << " has no weapon to attack with" << std::endl;
}

HumanB::HumanB(const std::string &nameB) : nameB(nameB), weapon(NULL)
{}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}


