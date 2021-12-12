#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain
{
private:
	std::string*	ideas;
public:
	Brain( void );
	Brain( const Brain& );
	Brain&	operator=( const Brain& );
	~Brain( void );

	const std::string*	getIdeas( void ) const;
	void				setIdeas( const std::string * );
};

#endif