#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap f("FR4G-B0T");

    f.attack("TargetDummy");
    f.takeDamage(30);
    f.beRepaired(20);
    f.highFivesGuys();
	return 0;
}