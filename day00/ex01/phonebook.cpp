#include "phonebook.hpp"

bool	phonebook::verify_phone_number(const std::string& pn)
{
	bool	res;

	for (int i = 0; i < pn.length(); i++)
	{
		if (pn[i] >= '0' && pn[i] <= '9')
			res = true;
		else
		{
			res = false;
			return (res);
		}
	}
	return (res);
}

/*
	* you should check if the string entered is empty or in the case of phone_number is a valid digits
*/

void	phonebook::add(void)
{
	std::cout << "First Name: ";
	getline(std::cin, m_contact[contact::spot].first_name);
	std::cout << "Last Name: ";
	getline(std::cin, m_contact[contact::spot].last_name);
	std::cout << "Nickname: ";
	getline(std::cin, m_contact[contact::spot].nickname);
	std::cout << "Phone Number: ";
	getline(std::cin, m_contact[contact::spot].phone_number);
	while (!verify_phone_number(m_contact[contact::spot].phone_number))
	{
		std::cout << "Phone number is unvalid try again\nPhone Number: ";
		getline(std::cin, m_contact[contact::spot].phone_number);
	}
	std::cout << "Darkest Secret: ";
	getline(std::cin, m_contact[contact::spot].darkest_secret);
}

void	phonebook::search(void)
{
	std::cout << "SEARCH has been called" << std::endl;
}

void	phonebook::verify_command(const std::string& command)
{
	if (command == "EXIT")
		exit(0);
	else if (command == "ADD")
		add();
	else if (command == "SEARCH")
		search();
}