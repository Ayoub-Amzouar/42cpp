#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class	Weapon
{
private:
	std::string	type;
public:
	Weapon( std::string );
	const std::string&	getType( void ) const;
	void				setType( std::string );
};

#endif