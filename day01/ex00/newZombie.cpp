#include "Zombie.hpp"

Zombie*		newZombie( std::string name )
{
	Zombie*	zombieObj;

	try
	{
		zombieObj = new Zombie(name);
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << ba.what() << std::endl;
		exit(1);
	}
	return(zombieObj);
}