#include "WrongAnimal.hpp"

/*
	Canonical Form
*/

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal Constructor Has Been Called" << std::endl;
	setType("Undefined");
}

WrongAnimal::WrongAnimal( const WrongAnimal& val )
{
	*this = val;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rop )
{
	if (this == &rop)
		return (*this);
	setType(rop.getType());	
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor Has Been Called" << std::endl;
}

/*
	Accessors
*/

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}

void		WrongAnimal::setType( const std::string& val )
{
	type = val;
}

/*
	Required Functio
*/

void		WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Animal Sound!" << std::endl;
}
