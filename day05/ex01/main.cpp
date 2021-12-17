#include "Bureaucrat.hpp"

int		main( void )
{
	/*############## TEST 1 ##############*/
	try
	{
		Bureaucrat	Obj("Sesco1", 160);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*############## TEST 2 ##############*/
	try
	{
		Bureaucrat	Obj("Sesco2", -3);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*############## TEST 3 ##############*/
	try
	{
		Bureaucrat	Obj("Sesco3", 150);
		std::cout << Obj << std::endl;
		Obj.decreament();
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*############## TEST 4 ##############*/
	try
	{
		Bureaucrat	Obj("Sesco4", 1);
		std::cout << Obj << std::endl;
		Obj.increament();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}