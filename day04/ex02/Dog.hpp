#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	brain;
public:
	Dog( void );
	Dog( const Dog& );
	Dog&	operator=( const Dog& );
	virtual	~Dog( void );

	void	makeSound( void ) const;
	
	const Brain*	getBrain( void ) const;
	void			setBrain( const Brain* );
};

#endif