#include "DiamondTrap.hpp"

/*
	Constructors
*/

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap Default Constructor Has Been Called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& val )
{
	this->setName(val);
	ClapTrap::setName(val + "__clap_trap");
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap( const DiamondTrap& objCopy )
{
	*this = objCopy;
}

/*
	Assignment Operator Overload
*/

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rop )
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

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor Has Been Called" << std::endl;
}

/*
	Accessors
*/

std::string	DiamondTrap::getName( void ) const
{
	return (Name);
}

void		DiamondTrap::setName( const std::string& val )
{
	Name = val;
}

/*
	Required Function
*/

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap Name " << this->getName() << " ClapTrap Name " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}