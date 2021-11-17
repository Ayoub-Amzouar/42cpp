#include "Replace.hpp"

int		main( int ac, char *av[] )
{
	if (ac != 4)
		std::cout << "Error: Wrong Number Of Arguments" << std::endl;
	else
	{
		Replace	replace( av[1], av[2], av[3] );
		replace.check_errors();
		replace.read_from_file();
		replace.search_and_replace();
		replace.export_file();
	}
	return (0);
}