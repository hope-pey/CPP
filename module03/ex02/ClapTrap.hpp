#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap& operator=(const ClapTrap &other);
        virtual ~ClapTrap();

        // getters
        std::string getName() const;
        int getHit() const;
        int getEnergy() const;
        int getAttack() const;
        // setters
        void setName(std::string name);
        void setHit(int hit);
        void setEnergy(int energy);
        void setAttack(int attack);
        //
        virtual void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif