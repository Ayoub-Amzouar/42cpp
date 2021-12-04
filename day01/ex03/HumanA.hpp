#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon&		type;
public:
	HumanA( std::string , Weapon& );
	void	attack( void );
};

#endif