#include "ScavTrap.hpp"

/*ScavTrap inherits from ClapTrap, and ClapTrap has a constructor that takes a
std::string, you must initialize the base class properly when constructing a
ScavTrap object.*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHit(100);
    this->setEnergy(50);
    this->setAttack(20);

    std::cout << "ScavTrap " << Name << " has entered the battlefield!" << std::endl;
    std::cout << " Hit: " << HitPoints << ", Energy: " << EnergyPoints << ", Attack : " << AttackDamage << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    // std::cout << "ScavTrap copy " << Name << " has been constructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
    if (this != &other){
        ClapTrap::operator=(other);
    }
    // std::cout << "ScavTrap assignment " << Name << " has been assigned.\n" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " has been destroyed." << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << Name << " is now in gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << Name << " is too weak to attack." << std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "ScavTrap " << Name << " attacks " << target
              << ", causing " << AttackDamage << " points of damage!. Energy points : " << EnergyPoints << std::endl;
}
