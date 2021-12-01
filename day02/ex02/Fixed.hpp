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
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const ;
	int		toInt( void ) const ;
	// comparison operators overlaod
	bool	operator>( const Fixed& );
	bool	operator<( const Fixed& );
	bool	operator>=( const Fixed& );
	bool	operator<=( const Fixed& );
	bool	operator==( const Fixed& );
	bool	operator!=( const Fixed& );
	// arithmetic operators overload
	float	operator+( const Fixed& );
	float	operator-( const Fixed& );
	float	operator*( const Fixed& );
	float	operator/( const Fixed& );
	// pre and post increment and drecremtn operators overload
	Fixed&	operator++();
	Fixed	operator++( int );
	Fixed&	operator--();
	Fixed	operator--( int );
	// static methods
	static	Fixed&	min( Fixed& , Fixed& );
	static const	Fixed&	min( const Fixed& , const Fixed& );
	static	Fixed&	max( Fixed& , Fixed& );
	static const	Fixed&	max( const Fixed& , const Fixed& );
private:
	int					_rawBits;
	const static int	_fractionalBits;
};

std::ostream& operator<<( std::ostream&, const Fixed& );

#endif