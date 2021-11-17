#include "Replace.hpp"

Replace::Replace( std::string filename, std::string s1, std::string s2 )
{
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
}

int		Replace::check_errors( void )
{
	std::streampos	pos;

	_infile.open( _filename );
	if (!_infile.is_open())
	{
		std::cerr << "Error Opening \"" << _filename << "\"" << std::endl;
		return (1);
	}
	_infile.seekg( 0, std::ios::end );
	pos = _infile.tellg();
	if (pos == 0 || _s1.empty() || _s2.empty())
	{
		if (pos == 0)
			std::cerr << "\"" << _filename << "\" Is Empty" << std::endl;
		else if (_s1.empty())
			std::cerr << "S1 Is Empty" << std::endl;
		else if (_s2.empty())
			std::cerr << "S2 Is Empty" << std::endl;
		_infile.close();
		return (1);
	}
	_infile.seekg( 0 );
	return (0);
}

void	Replace::read_from_file( void )
{
	std::string	current;

	while (getline(_infile, current))
		_lines.append(current + "\n");
	_infile.close();
}


int		Replace::search_and_replace( void )
{
	size_t	at;

	at = _lines.find(_s1, 0);
	if (at == std::string::npos)
	{
		std::cerr << "No Match Of String \"" << _s1 << "\" Is Found" << std::endl;
		return (1);
	}
	while (at != std::string::npos)
	{
		_lines.erase(at, _s1.length());
		_lines.insert(at, _s2);
		at = _lines.find(_s1, 0);
	}
	return (0);
}

void	Replace::export_file( void )
{
	for (size_t i = 0; i < _filename.length(); i++)
		_filename[i] = toupper(_filename[i]);
	_filename.append(".replace");
	_outfile.open(_filename);
	if (!_outfile.is_open())
	{
		std::cerr << "Error Opening \"" << _filename << "\"" << std::endl;
		return ;
	}
	_outfile << _lines;
	_outfile.close();
}