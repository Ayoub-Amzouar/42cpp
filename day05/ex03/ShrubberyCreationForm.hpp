#ifndef __SHRUBBERY_CREATION_FORM_HPP__
#define __SHRUBBERY_CREATION_FORM_HPP__

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const std::string& );
	ShrubberyCreationForm( const ShrubberyCreationForm& );
	ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& );
	~ShrubberyCreationForm( void );

	void	action( void );
	void	execute( Bureaucrat const & );

	std::string		getTarget( void ) const;
};

#endif