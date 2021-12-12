#include "Cat.hpp"

/*
	Canonical Form
*/

Cat::Cat( void )
{
	std::cout << "Cat Constructor Has Been Called" << std::endl;
	setType("Cat");
}

Cat::Cat( const Cat& val )
{
	*this = val;
}

Cat&	Cat::operator=( const Cat& rop )
{
	if (this == &rop)
		return (*this);
	setType(rop.getType());	
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor Has Been Called" << std::endl;
}

/*
	Required Functio
*/

void		Cat::makeSound( void ) const
{
	std::cout << "MEOWS!!!!!!!" << std::endl;
}
