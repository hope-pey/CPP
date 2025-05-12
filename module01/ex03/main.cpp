#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // wepon
    {
        Weapon w = Weapon("old weapon");
        std::cout << "wepon type : " << w.getType() << std::endl;
        w.setType("new weapon");
        std::cout << "new type : " << w.getType() << std::endl;
    }
    // class A
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    // class B (with weapon)
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    // class B (no weapon)
    {
        Weapon club = Weapon("crude spiked club");
        HumanB lina("lina");
        lina.attack();
        club.setType("some other type of club");
        lina.attack();
    }  
  
    return 0;
}