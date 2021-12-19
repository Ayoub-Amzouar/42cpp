#include "ShrubberyCreationForm.hpp"

int		main( void )
{
	try
	{
		ShrubberyCreationForm	scfObj("sesco");
		Bureaucrat				bObj("aamzouar", 15);

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