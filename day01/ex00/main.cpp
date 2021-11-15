#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main(void)
{
	Zombie* tmp;

	tmp = newZombie("brahim");
	tmp->announce();
	delete tmp;
	return (0);
}