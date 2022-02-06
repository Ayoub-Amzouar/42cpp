#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span( void ) {}

Span::Span( unsigned int N )
{
	this->_size = N;
}

Span::Span( const Span& copy )
{
	this->_vec.assign(copy._vec.begin(), copy._vec.end());
}

Span&	Span::operator=( const Span& rop )
{
	if (this == &rop)
		return (*this);
	
	this->_vec.assign(rop._vec.begin(), rop._vec.end());
	return (*this);
}

Span::~Span( void ) {}

void	Span::addNumber( int nb )
{
	if (this->_vec.size() < this->_size)
		this->_vec.push_back(nb);
	else
		throw AlreadyFilled();
}

void	Span::addNumber( const std::vector<int>& copy )
{
	if (copy.size() <= this->_size)
		this->_vec.assign(copy.begin(), copy.end());
	else
		throw AlreadyFilled();
}

int		Span::shortestSpan( void )
{
	std::vector<int>::iterator	it;
	int							ret;

	if (this->_vec.size() <= 1)
		throw NotEnough();

	it = this->_vec.begin();
	sort(it, this->_vec.end());
	ret = *(it + 1) - *it;
	it = it + 1;
	while (it != (this->_vec.end()-1))
	{
		if (ret > (*(it + 1) - *it))
			ret =  *(it + 1) - *it;
		it++;
	}
	return (ret);
}

int		Span::longestSpan( void )
{
	if (this->_vec.size() <= 1)
		throw NotEnough();

	sort(this->_vec.begin(), this->_vec.end());
	return(*(this->_vec.end() - 1) - *(this->_vec.begin()));
}