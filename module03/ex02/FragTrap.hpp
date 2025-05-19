#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap& operator=(const FragTrap &other);
        ~FragTrap();

        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif