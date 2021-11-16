#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
}

void	HumanB::setWeapon( Weapon& weaponType)
{
	this->_type = &weaponType;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_type->getType() << std::endl;
}