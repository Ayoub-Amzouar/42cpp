#include "Karen.hpp"

#define BOLD "\e[1m"
#define RESET "\e[0m"

void	Karen::debug( void )
{
	std::cout << BOLD << "[ DEBUG ]\n" << RESET << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << BOLD << "[ INFO ]\n" << RESET << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << BOLD << "[ WARNING ]\n" << RESET << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << BOLD << "[ ERROR ]\n" << RESET << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	void		(Karen::*method_ptr[4])();
	int			i;

	method_ptr[0] = &Karen::debug;
	method_ptr[1] = &Karen::info;
	method_ptr[2] = &Karen::warning;
	method_ptr[3] = &Karen::error;
	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	(this->*method_ptr[i])();
	std::cout << std::endl;
}