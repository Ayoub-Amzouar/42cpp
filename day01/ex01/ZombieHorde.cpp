#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	zombieObj;

	try
	{
		zombieObj = new Zombie[N];
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << ba.what() << std::endl;
	}
	for (int i = 0; i < N; i++)
		zombieObj[i].setName(name);
	return (zombieObj);
}