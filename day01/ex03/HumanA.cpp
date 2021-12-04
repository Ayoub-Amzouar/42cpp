#include "HumanA.hpp"

HumanA::HumanA( std::string Name, Weapon& type ) : type(type)
{
	this->name = Name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->type.getType() << std::endl;
}