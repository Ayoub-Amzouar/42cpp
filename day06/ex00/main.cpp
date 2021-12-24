#include <iostream>
#include <stdlib.h>

/*
	stoa()
	stof()
	stod()
*/

void	print_pseudo_f( std::string input )
{
	int		len;

	len = input.length() - 1;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << input << std::endl;
	input.resize(len, 1);
	std::cout << "double: " << input << std::endl;
}

void	print_pseudo_d( std::string input )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << input << "f" << std::endl;
	std::cout << "double: " << input << std::endl;
}

void	print_valid( std::string input )
{
	double	nb;

	nb = atof(input.c_str());
	if (nb >= 0 && nb <= 15)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << "float: " << static_cast<float>(nb) << std::endl;
	std::cout << "double: " << static_cast<float>(nb) << std::endl;
}

void	check_input( char *input )
{
	std::string	s_input;

	s_input = input;
	if (s_input == "-inff" || s_input == "+inff" || s_input  == "nanf")
		print_pseudo_f(s_input);
	else if (s_input == "-inf" || s_input == "+inf" || s_input  == "nan")
		print_pseudo_d(s_input);
	else if (s_input.find_first_not_of("1234567890.f") == std::string::npos)
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