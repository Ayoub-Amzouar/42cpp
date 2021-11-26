#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_nbBits = 8;

Fixed::Fixed( void )
{
	_rawBits = 0;
}

Fixed	Fixed::Fixed( const Fixed& copyObj )
{
	this->_rawBits = copyObj._rawBits;
}

Fixed	operator = ( const Fixed& fixedObj )
{
	Fixed	newObj;

	newObj = ;
	return (newObj);
}