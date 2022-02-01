#include "swap.hpp"
#include "max.hpp"
#include "min.hpp"
#include <iostream>

int		main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "initial a = " << a << " and b = " << b << "\n\n";
	swap(a, b);
	
	std::cout << "a & b swapped a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "initial c = " << c << " and d = " << d << "\n\n";
	swap(c, d);
	
	std::cout << "c & d swapped c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}