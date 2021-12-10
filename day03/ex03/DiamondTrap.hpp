#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap( void );
	DiamondTrap( const DiamondTrap& );
	DiamondTrap&	operator=( const DiamondTrap& );
	~DiamondTrap( void );

	DiamondTrap( const std::string& );

};

#endif