#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <stdlib.h>
#include <ctime>

/*
	Orthodox Canonical RobotomyRequestForm
*/

RobotomyRequestForm::RobotomyRequestForm( const std::string& Target ) : Form("Default", 72, 45), target(Target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& copyObj ) : Form("Default", 72, 45), target(copyObj.getTarget()) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rop )
{
	if (this != &rop)
		this->target = rop.getTarget();
	return (*this);	
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

/*
	Accessors
*/

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (target);
}

/*
	Required Functions
*/

void	RobotomyRequestForm::action( void )
{
	int		nb;

	srand(time(NULL));
	nb = rand() % 2;
	if (nb)
		std::cout << target << " has been robotomized successfully \xF0\x9F\x98\x81" << std::endl;
	else
		std::cout << target << " has not been robotomized successfully \xF0\x9F\x98\x94"  << std::endl;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executer )
{
	if ( this->getIsSigned() == true && executer.getGrade() <= this->getExecGrade())
		action();
	else if (!(this->getIsSigned()))
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException(); 
}