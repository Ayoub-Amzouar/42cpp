#include "Replace.hpp"

void	Replace::check_errors( void )
{
	std::streampos	pos;

	_infile.open( _filename );
	if (!_infile.is_open())
	{
		std::cerr << "Error Opening " << _filename << std::endl;
		exit( 0 );
	}
	_infile.seekg( 0, std::ios::end );
	pos = _infile.tellg();
	if (pos == 0)
	{
		std::cerr << _filename << " Is Empty" << std::endl;
		exit( 0 );
	}
	_infile.seekg( 0 );
	if (_s1.empty())
	{
		std::cerr << "S1 Is Empty" << std::endl;
		exit( 0 );
	}
	if (_s2.empty())
	{
		std::cerr << "S2 Is Empty" << std::endl;
		exit( 0 );
	}
}