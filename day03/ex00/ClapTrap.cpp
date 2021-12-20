#include "ClapTrap.hpp"

/*
	Constructors
*/

ClapTrap::ClapTrap( const std::string& val )
{
	std::cout << "Parameterized Constructor Has Been Called" << std::endl;
	Name = val;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& copyObj )
{
	*this = copyObj;
}

/*
	Assignment Operator Overload
*/

ClapTrap&	ClapTrap::operator=( const ClapTrap& rop )
{
	if (this == &rop)
		return (*this);
	Name = rop.getName();
	HitPoints = rop.getHitPoints();
	EnergyPoints = rop.getEnergyPoints();
	AttackDamage = rop.getAttackDamage();
	return (*this);
}

/*
	Destructor
*/

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor Has Been Called" << std::endl;
}

/*
	Accessors
*/

std::string	ClapTrap::getName( void ) const
{
	return (Name);
}

int			ClapTrap::getHitPoints( void ) const
{
	return (HitPoints);
}

int			ClapTrap::getEnergyPoints( void ) const
{
	return (EnergyPoints);
}

int			ClapTrap::getAttackDamage( void ) const
{
	return (AttackDamage);
}

void		ClapTrap::setName( const std::string& val )
{
	Name = val;
}

void		ClapTrap::setHitPoints( const int val )
{
	HitPoints = val;
}

void		ClapTrap::setEnergyPoints( const int val )
{
	EnergyPoints = val;
}

void		ClapTrap::setAttackDamage( const int val )
{
	EnergyPoints = val;
}

/*
	Required Functions
*/

void		ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " took " << amount << " points of damage!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " is repaired with " << amount << " points!" << std::endl;
}