#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed( const Fixed& copyObj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyObj;
}

Fixed&	Fixed::operator= ( const Fixed& fixedObj )
{
	if (this == &fixedObj)
		return (*this);
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = fixedObj.getRawBits();
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}