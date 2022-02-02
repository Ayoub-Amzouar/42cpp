#include "Array.hpp"
#include <iostream>

int		main( void )
{
	Array<char>	arr2;

	try
	{
		arr2[0] = 'c';
		std::cout << arr2[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}