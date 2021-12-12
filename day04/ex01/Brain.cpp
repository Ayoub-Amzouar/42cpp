#include "Brain.hpp"

/*
	Canonical Form
*/

Brain::Brain( void )
{
	std::cout << "Brain Constructor Has Been Called" << std::endl;
	ideas = new std::string[100];
}

Brain::Brain( const Brain& val )
{
	*this = val;
}

Brain&	Brain::operator=( const Brain& rop )
{
	if (this == &rop)
		return (*this);
	setIdeas(rop.getIdeas());
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor Has Been Called" << std::endl;
	delete [] ideas;
}

/*
	Accessors
*/

const std::string*	Brain::getIdeas( void ) const
{
	return (ideas);
}

void				Brain::setIdeas( const std::string *val )
{
	for(int i = 0; i < 100; i++)
		ideas[i] = val[i];
}
