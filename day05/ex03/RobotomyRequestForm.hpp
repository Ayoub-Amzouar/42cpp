#ifndef __ROBOTOMY_REQUEST_FORM_HPP__
#define __ROBOTOMY_REQUEST_FORM_HPP__

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
	RobotomyRequestForm( const std::string& );
	RobotomyRequestForm( const RobotomyRequestForm& );
	RobotomyRequestForm&	operator=( const RobotomyRequestForm& );
	~RobotomyRequestForm( void );

	void	action( void );
	void	execute( Bureaucrat const & );

	std::string		getTarget( void ) const;
};

#endif