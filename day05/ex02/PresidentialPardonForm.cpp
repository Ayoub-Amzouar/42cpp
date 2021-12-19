#include "PresidentialPardonForm.hpp"

/*
	Orthodox Canonical PresidentialPardonForm
*/

PresidentialPardonForm::PresidentialPardonForm( const std::string& Target ) : Form("Default", 25, 5), target(Target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& copyObj ) : Form("Default", 25, 5), target(copyObj.getTarget()) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rop )
{
	if (this != &rop)
		this->target = rop.getTarget();
	return (*this);	
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

/*
	Accessors
*/

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (target);
}

/*
	Required Functions
*/

void	PresidentialPardonForm::action( void )
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executer )
{
	if ( this->getIsSigned() == true && executer.getGrade() <= this->getExecGrade())
		action();
	else if (!(this->getIsSigned()))
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException(); 
}