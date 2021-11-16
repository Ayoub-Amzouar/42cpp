#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_type;
public:
	HumanB( std::string );
	void	setWeapon( Weapon& );
	void	attack( void );
};

#endif