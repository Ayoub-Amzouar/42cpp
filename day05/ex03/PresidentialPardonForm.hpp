#ifndef __PRESIDENTIAL_PARDON_FORM_HPP__
#define __PRESIDENTIAL_PARDON_FORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm( const std::string& );
	PresidentialPardonForm( const PresidentialPardonForm& );
	PresidentialPardonForm&	operator=( const PresidentialPardonForm& );
	~PresidentialPardonForm( void );

	void	action( void );
	void	execute( Bureaucrat const & );

	std::string		getTarget( void ) const;
};

#endif