#include "Zombie.hpp"

Zombie*		newZombie( std::string name )
{
	Zombie*	zombieObj;

	try
	{
		zombieObj = new Zombie;
	}
	catch (std::bad_alloc&b ba)
	{
		std::cerr << ba.what() << std::endl;
	}
	zombieObj->setName(name);
	return(zombieObj);
}