#include "Dog.hpp"

/*
	Canonical Form
*/

Dog::Dog( void )
{
	std::cout << "Dog Constructor Has Been Called" << std::endl;
	setType("Dog");
}

Dog::Dog( const Dog& val )
{
	*this = val;
}

Dog&	Dog::operator=( const Dog& rop )
{
	if (this == &rop)
		return (*this);
	setType(rop.getType());	
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor Has Been Called" << std::endl;
}

/*
	Required Functio
*/

void		Dog::makeSound( void ) const
{
	std::cout << "AHOW!!!!!!!" << std::endl;
}
