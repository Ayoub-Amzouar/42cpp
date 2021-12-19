#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main( void )
{
	try
	{
		// ShrubberyCreationForm	scfObj("sesco");
		// RobotomyRequestForm		scfObj("sesco");
		PresidentialPardonForm		scfObj("sesco");
		Bureaucrat					bObj("aamzouar", 1);

		scfObj.beSigned(bObj);
		scfObj.execute(bObj);
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