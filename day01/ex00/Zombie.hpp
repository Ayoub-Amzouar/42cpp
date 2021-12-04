#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie( const std::string& );
	void		announce( void ) const;
	~Zombie();
};

#endif