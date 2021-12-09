#include "ScavTrap.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

// change parameter of set function in ClapTrap to const

int		main(void)
{
	ClapTrap	obj1;
	ScavTrap	obj2;

	obj1 = ClapTrap("\033[1;32mEren\033[0m");

	obj1.attack("Reiner");
	obj1.takeDamage(13);
	obj1.beRepaired(5);
	
	std::cout << std::endl;

	obj2 = ScavTrap("\033[1;32mMikasa\033[0m");
	obj2.attack("Annie");
	obj2.guardGate();
	return (0);
}