#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
public:
	Fixed( void );
	Fixed( const int );
	Fixed( const float );
	Fixed( const Fixed& );
	Fixed&	operator=( const Fixed& );
	~Fixed( void );
public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const ;
	int		toInt( void ) const ;
	// add << operator function overload
private:
	int					_rawBits;
	// change this name in ex00 too
	const static int	_fractionalBits;
};

std::ostream& operator<<( std::ostream&, const Fixed& );

#endif