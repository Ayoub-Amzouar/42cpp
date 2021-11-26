#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
public:
	Fixed( void );
	Fixed( const Fixed& );
	Fixed&	operator = ( const Fixed& );
	~Fixed( void );
};