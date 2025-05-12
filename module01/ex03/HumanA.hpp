#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string nameA;
        Weapon &weapon;
    public:
    HumanA(const std::string &nameA, Weapon &weapon);
    ~HumanA() {}
    void attack() const;
};
#endif