#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <time.h>

#define MAX_NUM 10000

void	print( int nb )
{
	std::cout << nb << " ";
}

int		main( void )
{
	std::vector<int>	vec;
	Span				sp(MAX_NUM);

	srand(time(0));
	for (int i = 0; i < MAX_NUM; i++)
		vec.push_back(rand());

	for_each(vec.begin(), vec.end(), &print);
	std::cout << std::endl;
	sp.addNumber(vec);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}