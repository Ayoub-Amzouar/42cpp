#include "HumanB.hpp"

HumanB::HumanB( std::string Name )
{
	this->name = Name;
}

void	HumanB::setWeapon( Weapon& weaponType)
{
	this->type = &weaponType;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->type->getType() << std::endl;
}