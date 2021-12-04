#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	std::string getName( void ) const;
	void		setName( const std::string );
	void		announce( void ) const;
	~Zombie();
};

#endif