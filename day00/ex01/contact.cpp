#include "contact.hpp"

int		contact::spot;
int		contact::filled;

void	contact::increment(void)
{
	contact::spot = (contact::spot + 1) % 8;
	if (contact::filled != 8)
		contact::filled += 1;
}