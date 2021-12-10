#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	Name;
public:
	DiamondTrap( void );
	DiamondTrap( const DiamondTrap& );
	DiamondTrap&	operator=( const DiamondTrap& );
	~DiamondTrap( void );

	DiamondTrap( const std::string& );

	std::string	getName( void ) const;
	void		setName( const std::string& );

	void	whoAmI( void );
	void	attack( const std::string& );
};

#endif