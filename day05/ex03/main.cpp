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

		Form*	formObj = internObj.makeForm("presidential pard", "sesco");
		
		if (!formObj)
			return (1);

		formObj->beSigned(bObj);
		formObj->execute(bObj);

		bObj.executeForm(*formObj);
		delete formObj;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const ShrubberyCreationForm::FormNotSigned& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}