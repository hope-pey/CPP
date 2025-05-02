#include "Weapon.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        std::cout << "wepon type : " << club.getType() << std::endl;
        club.setType("changed");
        std::cout << "new type : " << club.getType() << std::endl;
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    // {
    //     Weapon club = Weapon("crude spiked club");
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    return 0;
}