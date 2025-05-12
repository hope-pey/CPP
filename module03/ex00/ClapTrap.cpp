#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    :Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << name << " has been constructed.\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " has been destroyed.\n";
}

int ClapTrap::getHit() const
{
    return (HitPoints);
}
int ClapTrap::getEnergy() const
{
    return(EnergyPoints);
}
int ClapTrap::getAttack()  const
{
    return(AttackDamage);
}
void ClapTrap::setHit(int hit)
{
    HitPoints = hit;
}
void ClapTrap::setEnergy(int energy)
{
    EnergyPoints = energy;
}
void ClapTrap::setAttack(int attack)
{
    AttackDamage = attack;
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " cant't attack : no energy or hits points left !" << std::endl;
    }
    EnergyPoints--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints -= amount;
    if (HitPoints < 0)
        HitPoints = 0;
    std::cout << "ClapTrap " << Name << " takes " << amount << ", causing " << HitPoints << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " cant't repaire : no energy or hits points left !" << std::endl;
    }
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << Name << " repairs itself for " << amount << ", " << HitPoints << ": points of damage!" << std::endl;
}
