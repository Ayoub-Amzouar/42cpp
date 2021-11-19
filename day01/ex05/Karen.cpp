#include "Karen.hpp"

void	Karen::complain( std::string level )
{
	method_ptr[0] = &Karen::debug();
	method_ptr[1] = &Karen::info();
	method_ptr[2] = &Karen::warning();
	method_ptr[3] = &Karen::error();
}