#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
public:
	Fixed( void );
	Fixed( const Fixed& );
	Fixed&	operator = ( const Fixed& );
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
private:
	int				_rawBits;
	const	static	_nbBits;
};