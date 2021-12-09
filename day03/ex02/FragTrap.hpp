#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap& );
	FragTrap&	operator=( const FragTrap& );
	~FragTrap( void );

	FragTrap( const std::string& );

	void	highFivesGuys( void );
};

#endif