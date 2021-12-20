#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap& );
	FragTrap&	operator=( const FragTrap& );
	~FragTrap( void );

	FragTrap( const std::string& );

	void	highFivesGuys( void );
	void	attack( const std::string & );
};

#endif