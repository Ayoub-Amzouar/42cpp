#include "Zombie.hpp"

#define YELLOW "\033[1;32m"
#define RESET "\033[0m"

std::string	Zombie::getName( void ) const
{
	return (this->name);
}

void		Zombie::setName( const std::string Name )
{
	this->name = Name;
}

void		Zombie::announce( void ) const
{
	std::cout << YELLOW << this->name << RESET << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << YELLOW << this->name << RESET << " Destructor Has Been Called" << std::endl;
}