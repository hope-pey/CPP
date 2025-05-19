#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ClapTrap a("x");
	ScavTrap b("y");

	a.attack("Enemy1");
	b.attack("Enemy2");

	a.takeDamage(3);
	a.beRepaired(7);
	b.takeDamage(100);
	b.beRepaired(300);

	b.guardGate();

	ScavTrap c(b);
	ScavTrap d("delta");
	d = c;
	return 0;
}