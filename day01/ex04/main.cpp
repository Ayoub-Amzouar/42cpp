#include "Replace.hpp"

int		main( int ac, char *av[] )
{
	int		ret;

	if (ac != 4)
		std::cout << "Error: Wrong Number Of Arguments" << std::endl;
	else
	{
		Replace	replace( av[1], av[2], av[3] );
		ret = replace.check_errors();
		if (ret == 0)
			replace.read_from_file();
		if (ret == 0)
			ret = replace.search_and_replace();
		if (ret == 0)
			replace.export_file();
	}
	return (0);
}