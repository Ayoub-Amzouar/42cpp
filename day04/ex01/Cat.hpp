#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	Cat( void );
	Cat( const Cat& );
	Cat&	operator=( const Cat& );
	virtual	~Cat( void );

	void		makeSound( void ) const;

	const Brain*	getBrain( void ) const;
	void			setBrain( const Brain* );
};

#endif