#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main(void)
{
	Zombie* zombie;

	zombie = newZombie("Killua");
	randomChump("Gon");
	delete zombie;
	return (0);
}