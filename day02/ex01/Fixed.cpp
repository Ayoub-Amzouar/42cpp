#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fractionalBits = 8;

/*
	Constructors
*/ 

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed( const int val )
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = (val * (1 << _fractionalBits));
}

Fixed::Fixed( const float val )
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = (val * (1 << _fractionalBits));
}

Fixed::Fixed( const Fixed& copyObj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyObj;
}

/*
	A Destructor
*/ 

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

/*
	Operator Overloads
*/ 

Fixed&	Fixed::operator=( const Fixed& fixedObj )
{
	if (this == &fixedObj)
		return (*this);
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = fixedObj.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}

/*
	Fixed Member Functions
*/ 

int		Fixed::getRawBits( void ) const
{
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawBits / (float)(1 << _fractionalBits));
}

int		Fixed::toInt( void ) const
{
	return (_rawBits / (1 << _fractionalBits));
}