#include "Animal.hpp"

/*
	Canonical Form
*/

Animal::Animal( void )
{
	std::cout << "Animal Constructor Has Been Called" << std::endl;
	setType("Undefined");
}

Animal::Animal( const Animal& val )
{
	*this = val;
}

Animal&	Animal::operator=( const Animal& rop )
{
	if (this == &rop)
		return (*this);
	setType(rop.getType());	
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor Has Been Called" << std::endl;
}

/*
	Operator Overload
*/

std::ostream&	operator<<( std::ostream& os, const Brain* brain )
{
	const std::string*	ptr;

	ptr = brain->getIdeas();
	os << ptr[0];
	return (os);
}

/*
	Accessors
*/

std::string	Animal::getType( void ) const
{
	return (type);
}

void		Animal::setType( const std::string& val )
{
	type = val;
}

/*
	Required Functio
*/

void		Animal::makeSound( void ) const
{
	std::cout << "Not Specified Yet!" << std::endl;
}
