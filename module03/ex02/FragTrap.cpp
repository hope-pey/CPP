#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHit(100);
    this->setEnergy(100);
    this->setAttack(30);

    std::cout << "FragTrap " << Name << " has entered the battlefield!" << std::endl;
    std::cout << " Hit: " << HitPoints << ", Energy: " << EnergyPoints << ", Attack : " << AttackDamage << std::endl;

}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap copy " << Name << " has been constructed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
    if (this != &other){
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap assignment " << Name << " has been assigned.\n" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " has been destroyed." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "FragTrap " << Name << " is too weak to attack." << std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "FragTrap " << Name << " attacks " << target
              << ", causing " << AttackDamage << " points of damage!. Energy points : " << EnergyPoints << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " requests high fives from everyone! ✋😄" << std::endl;
}
