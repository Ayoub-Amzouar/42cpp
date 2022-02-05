#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>
#include <exception>

class	Span
{
public:
	Span( void );
	Span( unsigned int );
	Span( const Span& );
	Span&	operator=( const Span& );
	~Span( void );

	void	addNumber( int );
	void	addNumber( const std::vector<int>& );
	int		shortestSpan( void );
	int		longestSpan( void );
	class	AlreadyFilled : public std::exception
	{
	public:
		const char *what( void ) const throw()
		{
			return ("Error: The array is already filled");
		}
	};
	class	NotEnough : public std::exception
	{
	public:
		const char *what( void ) const throw()
		{
			return ("Error: There wasn't enough items to complete the operation");
		}
	};
private:
	std::vector<int>			_vec;
	std::vector<int>::iterator	_it;
};

#endif