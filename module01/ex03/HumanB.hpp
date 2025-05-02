#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string nameB;
        Weapon *weapon;
    public:
    HumanB(const std::string &nameB);
    ~HumanB() {}
    const void attack() const;
    void setweapon(weapon &weapon);
}

#endif