#include "phonebook.hpp"

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
	while (m_contact[contact::spot].phone_number.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Phone number is unvalid try again\nPhone Number: ";
		getline(std::cin, m_contact[contact::spot].phone_number);
	}
	std::cout << "Darkest Secret: ";
	getline(std::cin, m_contact[contact::spot].darkest_secret);
	m_contact->increment();
}

void	phonebook::search(void)
{
	for (int i = 0; i < contact::filled; i++)
	{
		std::cout << "First Name: " << m_contact[i].first_name << std::endl;
		std::cout << "Last Name: " << m_contact[i].last_name << std::endl;
		std::cout << "Nickame: " << m_contact[i].nickname << std::endl;
		std::cout << "Phone Number: " << m_contact[i].phone_number << std::endl;
		std::cout << "Darkest Secret: " << m_contact[i].darkest_secret << std::endl;
	}
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