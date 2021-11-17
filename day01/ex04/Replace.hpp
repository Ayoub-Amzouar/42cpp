#ifndef __REPLACE_HPP__
#define __REPLACE_HPP__

#include <iostream>
#include <fstream>

class	Replace
{
private:
	std::string		_filename;
	std::string		_s1;
	std::string		_s2;
	std::string		_line;
	std::ifstream	_infile;
	std::ofstream	_outfile;
	
public:
	Replace( std::string ,  std::string , std::string );
	void	check_errors( void );
	void	read_from_file( void );
	void	search_and_replace( void );
	void	export_file( void );
};

#endif