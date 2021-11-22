#include "Karen.hpp"

int		main(void)
{
	Karen	karen_obj;

	std::cout << std::endl;
	karen_obj.complain("debug");
	std::cout << std::endl;
	karen_obj.complain("info");
	std::cout << std::endl;
	karen_obj.complain("warning");
	std::cout << std::endl;
	karen_obj.complain("error");
	std::cout << std::endl;
	return (0);
}