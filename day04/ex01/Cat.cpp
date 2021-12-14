#include "Cat.hpp"

/*
	Canonical Form
*/

Cat::Cat( void )
{
	std::cout << "Cat Constructor Has Been Called" << std::endl;
	brain = new Brain();
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
	setBrain(rop.getBrain());	
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor Has Been Called" << std::endl;
	delete brain;
}

/*
	Accessors
*/

const Brain*	Cat::getBrain( void ) const
{
	return(brain);
}

void			Cat::setBrain( const Brain* val )
{
	*brain = *val;
}


/*
	Required Functio
*/

void		Cat::makeSound( void ) const
{
	std::cout << "MEOWS!!!!!!!" << std::endl;
}
