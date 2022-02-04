#include "easyfind.hpp"
#include <vector>

int		main(void)
{
	std::vector<int>			vec;
	std::vector<int>::iterator	it;

	for (int i = 0; i < 10; i++)
		vec.push_back(i + 1);
	try
	{
		it = easyFind(vec, 15);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}