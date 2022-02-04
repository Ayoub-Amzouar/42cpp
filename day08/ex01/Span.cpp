#include "Span.hpp"
#include <iostream>

Span::Span( void ) {}

Span::Span( int N )
{
	this->_vec.reserve(N);
}

Span::Span( const Span& copy )
{
	std::vector<int>::iterator	it;

	it = copy.begin();
	while (it != copy.end())
		this->_vec.push_back(*it);
}

Span&	Span::operator=( const Span& rop )
{
	if (this == &rop)
		return (*this);
	
	std::vector<int>::iterator	it;

	it = rop.begin();
	this->_vec.clear();
	while (it != rop.end())
		this->_vec.push_back(*it);
	return (*this);
}

Span::~Span( void ) {}

void	Span::AddNumber( int nb )
{

}