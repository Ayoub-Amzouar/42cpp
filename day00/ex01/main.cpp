#include "phonebook.hpp"

/*
	* fix the color and bold code
*/

#define R_BOLD "\033[0;36m"
#define RESET  "\e[0m\033[0m"

std::string	show_prompt(void)
{
	std::string	line;
	
	std::cout << R_BOLD << "Availabe commands: \e[1mADD, SEARCH and EXIT" << RESET << std::endl;
	std::cout << "Enter your command: ";
	std::getline(std::cin, line);
	return (line);
}

int		main(void)
{
	std::string command;
	phonebook	phonebook_obj;

	while (1)
	{
		command = show_prompt();
		phonebook_obj.verify_command(command);
	}
	return (0);
}