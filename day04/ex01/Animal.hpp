#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	Animal( void );
	Animal( const Animal& );
	virtual Animal&	operator=( const Animal& );
	virtual	~Animal( void );

	std::string				getType( void ) const;
	void					setType( const std::string& );

	virtual void			makeSound( void ) const;
};

std::ostream&	operator<<( std::iostream&, const Brain* );

#endif