#include "Karen.hpp"

/*
	*	Declaring: return_type (class_name::*pointer_name) (parameter types)
	*	Initializing: pointer_name = &class_name::member_function_name;
	*	Calling: (object.*pointer_name)(arguments);
				 (object_ptr->*pointer_name)(arguments); 
*/

int		main(void)
{
	Karen	karen_obj;

	std::cout << std::endl;
	karen_obj.complain("error");
	std::cout << std::endl;
	karen_obj.complain("warning");
	std::cout << std::endl;
	karen_obj.complain("info");
	std::cout << std::endl;
	karen_obj.complain("debug");
	std::cout << std::endl;
	return (0);
}