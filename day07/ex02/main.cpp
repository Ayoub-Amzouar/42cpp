#include "Array.hpp"
#include <iostream>

#define MAX_VAL 10

int		main( void )
{
	Array<int>	arr1(MAX_VAL);

	std::cout << "arr1 elements:" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		arr1[i] = i + 1;
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	Array<int>	arr2 = arr1;
	arr2[3] = -1;
	std::cout << "arr2 elements:" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;

	try
	{
		Array<char> arr3;
		std::cout << arr3[3];
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << arr2[MAX_VAL + 10];
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}