#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class phonebook
{
public:
	contact m_contact[8];
	void	verify_command(const std::string&);
	bool	verify_phone_number(const std::string&);
	void	add(void);
	void	print_contact(void);
	void	search(void);
};

#endif