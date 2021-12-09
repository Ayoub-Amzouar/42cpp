#include "FragTrap.hpp"

/*
	Constructors
*/

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default Constructor Has Been Called" << std::endl;
}

FragTrap::FragTrap( const std::string& val )
{
	setName(val);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap( const FragTrap& objCopy )
{
	*this = objCopy;
}

/*
	Assignment Operator Overload
*/

FragTrap&	FragTrap::operator=( const FragTrap& rop )
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

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor Has Been Called" << std::endl;
}

/*
	Required Function
*/

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << getName() << " positive high fives request" << std::endl;
}