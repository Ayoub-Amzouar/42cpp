#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fractionalBits = 8;

/*
	Constructors
*/ 

Fixed::Fixed( void )
{
	_rawBits = 0;
}

Fixed::Fixed( const int val )
{
	_rawBits = (val * (1 << _fractionalBits));
}

Fixed::Fixed( const float val )
{
	_rawBits = (val * (1 << _fractionalBits));
}

Fixed::Fixed( const Fixed& copyObj )
{
	// this->_rawBits = copyObj._rawBits;
	*this = copyObj;
}

/*
	A Destructor
*/ 

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
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

/*
	Operator Overloads
*/ 

Fixed&	Fixed::operator=( const Fixed& fixedObj )
{
	_rawBits = fixedObj._rawBits;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixedObj)
{
    os << fixedObj.toFloat();
    return (os);
}

bool	Fixed::operator>( const Fixed& fixedObj )
{
	return (this->_rawBits > fixedObj.getRawBits());
}

bool	Fixed::operator<( const Fixed& fixedObj )
{
	return (this->_rawBits < fixedObj.getRawBits());
}

bool	Fixed::operator>=( const Fixed& fixedObj )
{
	return (this->_rawBits >= fixedObj.getRawBits());
}

bool	Fixed::operator<=( const Fixed& fixedObj )
{
	return (this->_rawBits <= fixedObj.getRawBits());
}

bool	Fixed::operator!=( const Fixed& fixedObj )
{
	return (this->_rawBits != fixedObj.getRawBits());
}

bool	Fixed::operator==( const Fixed& fixedObj )
{
	return (this->_rawBits == fixedObj.getRawBits());
}

float	Fixed::operator+( const Fixed& fixedObj)
{
	return (this->toFloat() + fixedObj.toFloat());
}

float	Fixed::operator-( const Fixed& fixedObj)
{
	return (this->toFloat() - fixedObj.toFloat());
}

float	Fixed::operator*( const Fixed& fixedObj)
{
	return (this->toFloat() * fixedObj.toFloat());
}

float	Fixed::operator/( const Fixed& fixedObj)
{
	return (this->toFloat() / fixedObj.toFloat());
}

Fixed&	Fixed::operator++()
{
	++_rawBits;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp;

	tmp = *this;
	_rawBits++;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	--_rawBits;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp;

	tmp = *this;
	_rawBits--;
	return (tmp);
}

// static methods

Fixed&	Fixed::min( Fixed& obj1 , Fixed& obj2 )
{
	if (obj1 > obj2)
		return (obj2);
	return (obj1);
}

const Fixed&	Fixed::min( const Fixed& obj1 , const Fixed& obj2 )
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj2);
	return (obj1);
}

Fixed&	Fixed::max( Fixed& obj1 , Fixed& obj2 )
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

const Fixed&	Fixed::max( const Fixed& obj1 , const Fixed& obj2 )
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	return (obj2);
}