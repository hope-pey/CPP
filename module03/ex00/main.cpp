#include "ClapTrap.hpp"

int	main() {
	ClapTrap	Robin("Robin");
	ClapTrap	Romeo("Romeo");

	
	Robin.attack("Roméo");
	Romeo.takeDamage(Robin.getAttack());
	Romeo.beRepaired(2);
	std::cout << "-------------------------------" << std::endl;
	ClapTrap a("first");
	ClapTrap b(a); // copy constuctor
	ClapTrap c("third");
	c = a; // assignment operator
	std::cout << "-------------------------------" << std::endl;
	ClapTrap robot("x");

	robot.attack("target 1");
	robot.takeDamage(4);
	robot.beRepaired(3);
	robot.takeDamage(10);
	robot.attack("target 2");
	robot.beRepaired(5);
	return 0;
}