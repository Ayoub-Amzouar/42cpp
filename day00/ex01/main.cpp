#include "phonebook.hpp"

std::string	show_prompt(void)
{
	std::string	line;
	
	std::cout << BLUE << "Availabe commands: \e[1mADD, SEARCH and EXIT\e[0m" << RESET << std::endl;
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