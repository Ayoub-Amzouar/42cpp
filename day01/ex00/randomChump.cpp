#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	zombieObj;

	zombieObj.setName(name);
	zombieObj.announce();
}