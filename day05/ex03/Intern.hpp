#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <iostream>

class	Form;

class	Intern
{
public:
	Intern( void );
	Intern( const Intern& );
	Intern&	operator=( const Intern& );
	~Intern( void );

	Form*	makeForm( std::string, std::string );
};

#endif