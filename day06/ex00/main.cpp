#include <iostream>

/*
	stoa()
	stof()
	stod()
*/

void	check_input( char *input )
{
	std::string	s_input;

	s_input = input;
	if (s_input == "-inff" || s_input == "+inff" || s_input  == "nanf")
		print_pseudo_f(s_input);
	else if (s_input == "-inf" || s_input == "+inf" || s_input  == "nan")
		print_pseudo_d(s_input);
	else if (std::stod(s_input))
		print_valid(s_input);
	else
		std::cerr << "unvalid input!" << std::endl;
}

int		main( int ac, char *av[] )
{
	if (ac != 2)
		std::cerr << "wrong number of arguments!" << std::endl;
	else
		check_input(av[1]);
	return (0);
}