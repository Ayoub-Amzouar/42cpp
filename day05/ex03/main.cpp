#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int		main( void )
{
	try
	{
		Bureaucrat	bObj("aamzouar", 1);
		Intern		internObj;

		Form*	formObj = internObj.makeForm("robotomy request", "sesco");
		
		if (!formObj)
			return (1);

		formObj->beSigned(bObj);
		formObj->execute(bObj);

		bObj.executeForm(*formObj);
		delete formObj;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}