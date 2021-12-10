#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( const ScavTrap& );
	ScavTrap&	operator=( const ScavTrap& );
	~ScavTrap( void );

	ScavTrap( const std::string& );

	void	guardGate( void );
	void	attack( const std::string & );
};

#endif