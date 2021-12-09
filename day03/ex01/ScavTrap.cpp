#include "ScavTrap.hpp"

/*
	Constructors
*/

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap Default Constructor Has Been Called" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap( const std::string& val )
{
	setName(val);
}

ScavTrap::ScavTrap( const ScavTrap& objCopy )
{
	*this = objCopy;
}

/*
	Assignment Operator Overload
*/

ScavTrap&	ScavTrap::operator=( const ScavTrap& rop )
{
	if (this == &rop)
		return (*this);
	setName(rop.getName());
	setHitPoints(rop.getHitPoints());
	setEnergyPoints(rop.getEnergyPoints());
	setAttackDamage(rop.getAttackDamage());
	return (*this);
}


/*
	Destructor
*/

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor Has Been Called" << std::endl;
}

/*
	Required Function
*/

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void		ScavTrap::attack( const std::string & target )
{
	std::cout << "ClavTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}