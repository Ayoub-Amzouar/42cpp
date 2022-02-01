#include "iter.hpp"
#include <iostream>

template<typename T>
void	print_arr( T const &nb )
{
	std::cout << nb << std::endl;
}

int		main( void )
{
	int	*arr = new int[4];

	for (int i = 0; i < 4; i++)
		arr[i] = i + 1;
	
	iter(&arr, 4, &print_arr);
	delete [] arr;
	return (0);
}