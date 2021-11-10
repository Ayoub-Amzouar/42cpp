#include "contact.hpp"

int		contact::spot;
int		contact::filled;

void	contact::increment(void)
{
	contact::spot = 8 % (contact::spot + 1);
	if (contact::filled != 8)
		contact::filled += 1;
}