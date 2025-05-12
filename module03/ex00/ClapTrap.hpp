#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        // getrs
        int getHit() const;
        int getEnergy() const;
        int getAttack() const;
        // setters
        void setHit(int hit);
        void setEnergy(int energy);
        void setAttack(int attack);
        //
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif