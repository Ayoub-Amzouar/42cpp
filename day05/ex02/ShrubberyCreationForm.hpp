#ifndef __SHRUBBERY_CREATION_FORM_HPP__
#define __SHRUBBERY_CREATION_FORM_HPP__

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm( const std::string& );
	ShrubberyCreationForm( const ShrubberyCreationForm& );
	ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& );
	~ShrubberyCreationForm( void );

	void	action( void );
	void	execute( Bureaucrat const & );

	std::string		getTarget( void ) const;

	class	FormNotSigned : public std::exception
	{
		public:
			const char*	what( void ) const throw();
	};
};

#endif