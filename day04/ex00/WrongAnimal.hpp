#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& );
	WrongAnimal&	operator=( const WrongAnimal& );
	~WrongAnimal( void );

	std::string		getType( void ) const;
	void			setType( const std::string& );

	void	makeSound( void ) const;
};

#endif