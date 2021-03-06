#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
	Orthodox Canonical Form
*/

Form::Form( void ) : signGrade(0), execGrade(0) {}

Form::Form( const std::string& Name, int signG, int execG ) : name(Name), isSigned(false), signGrade(signG), execGrade(execG)
{
	if (signGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150)
		throw GradeTooLowException();
}

Form::Form( const Form& copyObj ) : name(copyObj.getName()), isSigned(false), signGrade(copyObj.getSignGrade()), execGrade(copyObj.getExecGrade()) {}

Form&	Form::operator=( const Form& rop )
{
	if (this != &rop)
		this->isSigned = rop.getIsSigned();
	return (*this);	
}

Form::~Form( void ) {}

/*
	Accessors
*/

std::string	Form::getName( void ) const
{
	return (name);
}

int			Form::getSignGrade( void ) const
{
	return (signGrade);
}

int			Form::getExecGrade( void ) const
{
	return (execGrade);
}

bool		Form::getIsSigned( void ) const
{
	return (isSigned);
}

/*
	Required Functions
*/

void		Form::beSigned( Bureaucrat& val )
{
	if (val.getGrade() > this->getSignGrade())
	{
		val.signForm(this);
		throw Form::GradeTooLowException();
	}
	else
	{
		this->isSigned = true;
		val.signForm(this);
	}
}

/*
	Nested Classes' Function Implementation
*/

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return ("Grade Too Hight!");
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return ("Grade Too Low!");
}

const char* Form::FormNotSigned::what( void ) const throw()
{
	return ("Form Not Signed!");
}

/*
	Operator Overloading
*/

std::ostream&	operator<<( std::ostream& os, const Form& obj )
{
	os << obj.getName() << ", sign grade " << obj.getSignGrade() << ". execution grade " << obj.getExecGrade() << ", sign status " << obj.getIsSigned();
	return (os);
}