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
	try
	{
		sp.addNumber(vec);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
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
	// {
	// 	Span	sp(3);

	// 	try
	// 	{
	// 		sp.addNumber(10);
	// 		sp.addNumber(1);
	// 		sp.addNumber(12);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	try
	// 	{
	// 		std::cout << sp.shortestSpan() << std::endl;
	// 		std::cout << sp.longestSpan() << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	return (0);
}