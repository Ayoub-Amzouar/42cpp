#include "WrongCat.hpp"

/*
	Canonical Form
*/

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat Constructor Has Been Called" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat( const WrongCat& val )
{
	*this = val;
}

WrongCat&	WrongCat::operator=( const WrongCat& rop )
{
	if (this == &rop)
		return (*this);
	setType(rop.getType());	
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor Has Been Called" << std::endl;
}

/*
	Required Functio
*/

void		WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat: MEOWS!!!!!!!" << std::endl;
}