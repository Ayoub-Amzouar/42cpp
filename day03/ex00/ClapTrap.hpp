#ifndef __CLAP_TRAP__
#define __CLAP_TRAP__

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
public:
	ClapTrap( void );
	ClapTrap( const std::string& );
	ClapTrap( const ClapTrap& );
	ClapTrap&	operator=( const ClapTrap& );
	~ClapTrap( void );

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif