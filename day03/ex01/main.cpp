#include "ScavTrap.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

int		main(void)
{
	ClapTrap	obj1;
	ScavTrap	obj2;

	std::cout << "-------------- LEVEL 0 --------------"<< std::endl;
	
	obj1 = ClapTrap("\033[1;32mEren\033[0m");
	obj1.attack("\033[1;34mReiner\033[0m");
	obj1.takeDamage(13);
	obj1.beRepaired(5);
	
	std::cout << "-------------- LEVEL 1 --------------"<< std::endl;

	obj2 = ScavTrap("\033[1;32mMikasa\033[0m");
	obj2.attack("\033[1;34mAnnie\033[0m");
	obj2.guardGate();
	return (0);
}