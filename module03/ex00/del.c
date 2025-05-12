#include <iostream>
#include <string>

class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    // Constructor
    ClapTrap(const std::string& name)
        : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
        std::cout << "ClapTrap " << name << " created!" << std::endl;
    }

    // Destructor
    ~ClapTrap() {
        std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
    }

    // Attack function
    void attack(const std::string& target) {
        if (hitPoints <= 0 || energyPoints <= 0) {
            std::cout << "ClapTrap " << name << " can't attack (no energy or hit points left)!" << std::endl;
            return;
        }
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    }

    // Take damage function
    void takeDamage(unsigned int amount) {
        hitPoints -= amount;
        if (hitPoints < 0)
            hitPoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage! (HP: " << hitPoints << ")" << std::endl;
    }

    // Repair function
    void beRepaired(unsigned int amount) {
        if (hitPoints <= 0 || energyPoints <= 0) {
            std::cout << "ClapTrap " << name << " can't repair (no energy or hit points left)!" << std::endl;
            return;
        }
        energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount
                  << " hit points! (HP: " << hitPoints << ")" << std::endl;
    }
};
