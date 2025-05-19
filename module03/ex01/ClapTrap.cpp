#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    :Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << Name << " has been constructed." << std::endl;
    std::cout << " Hit: " << HitPoints << ", Energy: " << EnergyPoints << ", Attack : " << AttackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
    *this = other;
    std::cout << "ClapTrap copy " << Name << " has been constructed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
    if (this != &other){
        this->Name = other.Name;
        this->HitPoints = other.getHit();
        this->EnergyPoints = other.getEnergy();
        this->AttackDamage = other.getAttack();
    }
    std::cout << "ClapTrap assignment " << Name << " has been assigned.\n" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " has been destroyed." << std::endl;
}
std::string ClapTrap::getName() const
{
    return (Name);
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
void ClapTrap::setName(std::string name)
{
    Name = name;
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
        return ;
    }
    EnergyPoints--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!. Energy points : " << EnergyPoints << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints -= amount;
    if (HitPoints < 0)
        HitPoints = 0;
    std::cout << "ClapTrap " << Name << " takes " << amount << " damage. Hits points : " << HitPoints << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints <= 0 || EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " cant't repaire : no energy or hits points left !" << std::endl;
        return ;
    }
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << Name << " repairs itself for " << amount << ", Hits points: " << HitPoints << " Energy points:" << EnergyPoints << std::endl;
}
