#ifndef __CLAP_TRAP__
#define __CLAP_TRAP__

#include <iostream>

class ClapTrap
{
private:
	std::string	Name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
public:
	ClapTrap( void );
	ClapTrap( const std::string& );
	ClapTrap( const ClapTrap& );
	ClapTrap&	operator=( const ClapTrap& );
	~ClapTrap( void );

	std::string	getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackDamage( void ) const;
	void		setName( std::string& );
	void		setHitPoints( int );
	void		setEnergyPoints( int );
	void		setAttackDamage( int );

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif