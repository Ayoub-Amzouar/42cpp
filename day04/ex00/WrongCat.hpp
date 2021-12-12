#ifndef __WRONG_CAT_HPP__
#define __WRONG_CAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat& );
	WrongCat&	operator=( const WrongCat& );
	~WrongCat( void );

	void		makeSound( void ) const;
};

#endif