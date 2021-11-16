#include "Weapon.hpp"

const std::string&	Weapon::getType( void ) const
{
	return (this->type);
}

void				Weapon::setType( std::string& weaponType )
{
	this->type = weaponType;
}