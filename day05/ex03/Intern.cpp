#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
	Orthodox Canonical Form
*/

Intern::Intern( void ) {}

Intern::Intern( const Intern& ) {}

Intern&	Intern::operator=( const Intern& ) { return (*this); }

Intern::~Intern( void ) {}

/*
	Required Functions
*/

Form*	Intern::makeForm( std::string name, std::string target )
{
	int			i = 0;
	Form*		formPtr;
	std::string	formsName[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	while ( i < 3 && formsName[i] != name )
		i++;
	switch	(i)
	{
		case 0 :
			formPtr = new ShrubberyCreationForm(target);
			break;
		case 1 :
			formPtr = new RobotomyRequestForm(target);
			break;
		case 2 :
			formPtr = new PresidentialPardonForm(target);
			break;
		default :
			std::cerr << "\"" << name << "\" there's no such form!" << std::endl;
			return (NULL);
	}
	std::cout << "Intern creates " << formsName[i] << std::endl;
	return (formPtr);
}