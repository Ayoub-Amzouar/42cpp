#include "Dog.hpp"

/*
	Canonical Form
*/

Dog::Dog( void )
{
	std::cout << "Dog Constructor Has Been Called" << std::endl;
	brain = new Brain;
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
	setBrain(rop.getBrain());	
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor Has Been Called" << std::endl;
	delete brain;
}

/*
	Accessors
*/

const Brain*	Dog::getBrain( void ) const
{
	return(brain);
}

void			Dog::setBrain( const Brain* val )
{
	*brain = *val;
}

/*
	Required Functio
*/

void		Dog::makeSound( void ) const
{
	std::cout << "AHOW!!!!!!!" << std::endl;
}
