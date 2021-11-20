#include "Karen.hpp"

int		main( int ac, char *av[] )
{
	if (ac != 2)
		std::cerr << "Wrong Number Of Arguments";
	else
	{
		Karen		karen_obj;
		std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int			index;

		index = 0;
		while (index < 4 && levels[index] != av[1])
			index++;
		switch(index)
		{
			case 0 :
				karen_obj.complain("debug");
				std::cout << std::endl;
			case 1 :
				karen_obj.complain("info");
				std::cout << std::endl;
			case 2 :
				karen_obj.complain("warning");
				std::cout << std::endl;
			case 3 :
				karen_obj.complain("error");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}