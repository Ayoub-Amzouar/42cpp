#include "Bureaucrat.hpp"

/*
	Orthodox Canonical Form
*/

Bureaucrat::Bureaucrat( const std::string& Name, const int Grade ) : name(Name), grade(Grade)
{
	std::cout << "Bureaucrat Constructor Has Been Called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& copyObj )
{
	*this = copyObj;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rop )
{
	return (*this);	
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat Destructor Has Been Called" << std::endl;
}

/*
	Accessors
*/

std::string	Bureaucrat::getName( void ) const
{
	return (name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (grade);
}

/*
	Nest Classes' Function Implementation
*/

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Grade Too Hight!");
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Grade Too Low!");
}