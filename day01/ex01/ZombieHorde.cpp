#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	zombieObj;

	zombieObj = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieObj[i].setName(name);
	return (zombieObj);
}