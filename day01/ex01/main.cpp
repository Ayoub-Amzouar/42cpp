#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int		main(void)
{
	Zombie*	zombieObj;
	int		N;

	N = 10;
	zombieObj = zombieHorde(N, "Sickl_");
	for (int i = 0; i < N; i++)
		zombieObj[i].announce();
	delete [] zombieObj;
	return (0);
}