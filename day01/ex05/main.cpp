#include "Karen.hpp"

/*
	*	Declaring: return_type (class_name::*pointer_name) (parameter types)
	*	Initializing: pointer_name = &class_name::member_function_name;
	*	Calling: (object.*pointer_name)(arguments);
				 (object_ptr->*pointer_name)(arguments); 
*/

int		main(void)
{
	Karen	obj1;

	std::cout << std::endl;
	obj1.complain("error");
	std::cout << std::endl;
	obj1.complain("warning");
	std::cout << std::endl;
	obj1.complain("info");
	std::cout << std::endl;
	obj1.complain("debug");
	std::cout << std::endl;
	return (0);
}