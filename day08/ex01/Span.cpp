#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span( void ) {}

Span::Span( unsigned int N )
{
	this->_vec.reserve(N);
	this->_it = this->_vec.begin();
}

Span::Span( const Span& copy )
{
	std::vector<int>::const_iterator	it;

	it = copy._vec.begin();
	while (it != copy._vec.end())
		this->_vec.push_back(*it);
}

Span&	Span::operator=( const Span& rop )
{
	if (this == &rop)
		return (*this);
	
	std::vector<int>::const_iterator	it;

	it = rop._vec.begin();
	this->_vec.clear();
	while (it != rop._vec.end())
		this->_vec.push_back(*it);
	return (*this);
}

Span::~Span( void ) {}

void	Span::addNumber( int nb )
{
	if (this->_it != this->_vec.end())
	{
		*this->_it = nb;
		this->_it++;
	}
	else
		throw AlreadyFilled();
}

void	Span::addNumber( const std::vector<int>& copy )
{
	this->_vec.assign(copy.begin(), copy.end());
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