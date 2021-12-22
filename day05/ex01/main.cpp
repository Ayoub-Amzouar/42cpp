#include "Form.hpp"

int		main( void )
{
	/*########## TEST1 ##########*/
	try
	{
		Form	Obj("Eren", 1337, 30);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	/*########## TEST2 ##########*/
	try
	{
		Form		Obj1("Zenitsu", 13, 37);
		Bureaucrat	Obj2("Tanjiro", 10);

		Obj1.beSigned(Obj2);
		std::cout << Obj1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}