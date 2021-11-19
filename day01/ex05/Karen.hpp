#ifndef __KAREN_HPP__
#define __KAREN_HPP__

class Karen
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	(Karen::*method_ptr)[4]();
public:
	void	complain( std::string );
};

#endif