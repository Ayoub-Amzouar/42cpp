#include "Zombie.hpp"

std::string	Zombie::getName( void ) const
{
	return (this->_name);
}

void		Zombie::setName( const std::string name )
{
	this->_name = name;
}

void		Zombie::announce( void ) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Destructor Has Been Called" << std::endl;
}