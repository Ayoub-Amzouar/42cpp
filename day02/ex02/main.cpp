#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed	c(2.45f);
	Fixed	d(11.11f);
	Fixed	const f( Fixed(2) + Fixed(3) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	/*________________MY OWN TESTS________________*/
	//		Arithmatic Operations:
	std::cout << "\nArithmatic Operations: " << std::endl;
	std::cout << "+: " << c + d << std::endl; // 13.56
	std::cout << "-: " << c - d << std::endl; // -8.66
	std::cout << "*: " << c * d << std::endl; // 27.2195
	std::cout << "/: " << c / 0 << std::endl; // 0.2205
	//		Comparizon Operations:
	std::cout << "\nComparizon Operations: " << std::endl;
	std::cout << ">:  " << (c > d) << std::endl; // false
	std::cout << "<:  " << (c < d) << std::endl; // true
	std::cout << ">=: " << (c >= c) << std::endl; // true
	std::cout << "<=: " << (d <= c) << std::endl; // false
	std::cout << "==: " << (c == d) << std::endl; // false
	std::cout << "!=: " << (c != d) << std::endl; // true
	//		Increament Drecrement Operations:
	std::cout << "\nIncreament Drecrement Operations: " << std::endl;
	a = 1;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a:   " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a:   " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	//		MIN & MAX Operations:
	std::cout << "\nMIN & MAX Operations: " << std::endl;
	std::cout << "Min: " << Fixed::min( c, d ) << std::endl; // c
	std::cout << "Const Min: " << Fixed::min( b, f ) << std::endl; // f
	std::cout << "Max: " << Fixed::max( c, d ) << std::endl; // d
	std::cout << "Const Max: " << Fixed::max( b, f ) << std::endl; // b
	return 0;
}