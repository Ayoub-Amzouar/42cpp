#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>

class	Span
{
public:
	Span( void );
	Span( int );
	Span( const Span& );
	Span&	operator=( const Span& );
	~Span( void );
	void	AddNumber( int );
	void	AddNumber_advanced( std::vector );
private:
	std::vector<int>	_vec;
};

#endif