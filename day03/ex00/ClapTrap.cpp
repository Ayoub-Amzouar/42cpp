#include "ClapTrap.hpp"

/*
	Constructors
*/

ClapTrap::ClapTrap( void )
{
	std::cout << "Default Constructor Has Been Called" << std::endl;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap( const std::string& val )
{
	std::cout << "String Constructor Has Been Called" << std::endl;
	Name = val;
}

ClapTrap::ClapTrap( const ClapTrap& copyObj )
{
	std::cout << "Copy Constructor Has Been Called" << std::endl;
	*this = copyObj;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rop )
{
	std::cout << "Assignation Operator Called" << std::endl;
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

void		ClapTrap::setName( std::string& val )
{
	Name = val;
}

void		ClapTrap::setHitPoints( int val )
{
	HitPoints = val;
}

void		ClapTrap::setEnergyPoints( int val )
{
	EnergyPoints = val;
}

void		ClapTrap::setAttackDamage( int val )
{
	EnergyPoints = val;
}

/*
	Required Functions
*/

void	attack(std::string const & target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);