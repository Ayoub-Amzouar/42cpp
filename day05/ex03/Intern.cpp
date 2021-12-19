#include "Inter.hpp"
#include <iostream>

/*
	Orthodox Canonical Form
*/

Inter::Inter( void ) {}

Inter::Intern( const Intern& ) {}

Intern&	Inter::operator=( const Intern& ) { return (*this); }

Inter::~Intern( void ) {}

/*
	Required Functions
*/

Form*	Inter::makeForm( std::string& name, std::string& target )
{

}