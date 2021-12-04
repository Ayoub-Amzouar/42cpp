#include "Zombie.hpp"

#define YELLOW "\033[1;32m"
#define RESET "\033[0m"

Zombie::Zombie() {}

Zombie::Zombie( const std::string& Name )
{
	this->name = Name;
	announce();
}

void		Zombie::announce( void ) const
{
	std::cout << YELLOW << this->name << RESET << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << YELLOW << this->name << RESET << " Destructor Has Been Called" << std::endl;
}