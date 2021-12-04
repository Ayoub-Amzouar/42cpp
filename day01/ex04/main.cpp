#include <iostream>
#include <fstream>

std::string		g_filename;
std::string		g_s1;
std::string		g_s2;
std::string		g_lines;
std::ifstream	g_infile;
std::ofstream	g_outfile;

int		check_errors( void )
{
	std::streampos	pos;

	g_infile.open( g_filename );
	if (!g_infile.is_open())
	{
		std::cerr << "Error Opening \"" << g_filename << "\"" << std::endl;
		return (1);
	}
	g_infile.seekg( 0, std::ios::end );
	pos = g_infile.tellg();
	if (pos == 0 || g_s1.empty() || g_s2.empty())
	{
		if (pos == 0)
			std::cerr << "\"" << g_filename << "\" Is Empty" << std::endl;
		else if (g_s1.empty())
			std::cerr << "S1 Is Empty" << std::endl;
		else if (g_s2.empty())
			std::cerr << "S2 Is Empty" << std::endl;
		g_infile.close();
		return (1);
	}
	g_infile.seekg( 0 );
	return (0);
}

void	read_from_file( void )
{
	std::string	current;

	while (getline(g_infile, current))
		g_lines.append(current + "\n");
	g_infile.close();
}

int		search_and_replace( void )
{
	size_t	at;

	at = g_lines.find(g_s1, 0);
	if (at == std::string::npos)
	{
		std::cerr << "No Match Of String \"" << g_s1 << "\" Is Found" << std::endl;
		return (1);
	}
	while (at != std::string::npos)
	{
		g_lines.erase(at, g_s1.length());
		g_lines.insert(at, g_s2);
		at = g_lines.find(g_s1, 0);
	}
	return (0);
}

void	export_file( void )
{
	for (size_t i = 0; i < g_filename.length(); i++)
		g_filename[i] = toupper(g_filename[i]);
	g_filename.append(".replace");
	g_outfile.open(g_filename);
	if (!g_outfile.is_open())
	{
		std::cerr << "Error Opening \"" << g_filename << "\"" << std::endl;
		return ;
	}
	g_outfile << g_lines;
	g_outfile.close();
}

int		replace( char *av[] )
{
	g_filename = av[1];
	g_s1 = av[2];
	g_s2 = av[3];

	if (check_errors() == 1)
		return (1);
	read_from_file();
	if (search_and_replace() == 1)
		return (1);
	export_file();
	return (0);
}

int		main( int ac, char *av[] )
{
	if (ac != 4)
	{
		std::cout << "Error: Wrong Number Of Arguments" << std::endl;
		return (1);
	}
	return (replace(av));
}