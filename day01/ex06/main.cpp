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
		std::cout << std::endl;
		switch(index)
		{
			case 0 :
				karen_obj.complain("debug");
				break;
			case 1 :
				karen_obj.complain("info");
				karen_obj.complain("debug");
				break;
			case 2 :
				karen_obj.complain("warning");
				karen_obj.complain("info");
				karen_obj.complain("debug");
				break;
			case 3 :
				karen_obj.complain("error");
				karen_obj.complain("warning");
				karen_obj.complain("info");
				karen_obj.complain("debug");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}