#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& type ) : _name(name), _type(type)
{}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_type.getType() << std::endl;
}