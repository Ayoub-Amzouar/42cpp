#include "phonebook.hpp"

std::string	phonebook::truncate(const std::string &str)
{
	std::string	tmp;

	tmp = str;
	if (str.length() >= 10)
	{
		tmp.resize(10);
		tmp[9] = '.';
	}
	return (tmp);
}

void	phonebook::print_contact(void)
{
	std::cout << BOLD << "     Index|" << "First Name|" << " Last Name|" << "  Nickname|\n" << RESET;
	for (int i = 0; i < contact::filled; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << phonebook::truncate(m_contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << phonebook::truncate(m_contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << phonebook::truncate(m_contact[i].getNickname()) << "|" << std::endl;
	}
}

void	phonebook::search(void)
{
	int			i;
	std::string	index;

	print_contact();
	if (contact::filled == 0)
		return ;
	std::cout << "Enter your index: ";
	my_getline(index);
	if (index.empty() == false && index.find_first_not_of("0123456789") == std::string::npos)
		i = stoi(index);
	while (index.empty() == true ||
	index.find_first_not_of("0123456789") != std::string::npos || i < 0 || i >= contact::filled)
	{
		std::cout << "Unvalid Index Try Again: ";
		my_getline(index);
		if (index.empty() == false && index.find_first_not_of("0123456789") == std::string::npos)
			i = stoi(index);
	}
	std::cout << BOLD << "First Name: " << RESET << m_contact[i].getFirstName() << std::endl;
	std::cout << BOLD << "Last Name: " << RESET << m_contact[i].getLastName() << std::endl;
	std::cout << BOLD << "Nickname: " << RESET << m_contact[i].getNickname() << std::endl;
	std::cout << BOLD << "Phone Number: " << RESET << m_contact[i].getPhonenumber() << std::endl;
	std::cout << BOLD << "Darkest Secret: " << RESET << m_contact[i].getDarkestSecret() << std::endl;
}

void	phonebook::add(void)
{
	std::string	line;

	std::cout << BOLD << "First Name: " << RESET;
	my_getline(line);
	m_contact[contact::spot].setFirstName(line);
	std::cout << BOLD << "Last Name: " << RESET;
	my_getline(line);
	m_contact[contact::spot].setLastName(line);
	std::cout << BOLD << "Nickname: " << RESET;
	my_getline(line);
	m_contact[contact::spot].setNickname(line);
	std::cout << BOLD << "Phone Number: " << RESET;
	my_getline(line);
	m_contact[contact::spot].setPhonenumber(line);
	while (m_contact[contact::spot].getPhonenumber().find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << BOLD << "Unvalid Phone Number Try Again: " << RESET;
		my_getline(line);
		m_contact[contact::spot].setPhonenumber(line);
	}
	std::cout << BOLD << "Darkest Secret: " << RESET;
	my_getline(line);
	m_contact[contact::spot].setDarkestSecret(line);
	m_contact->increment();
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