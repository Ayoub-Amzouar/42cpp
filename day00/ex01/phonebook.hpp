#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class phonebook
{
public:
	contact m_contact[8];
	void	verify_command(void);
	void	verify_phone_number(void);
	void	add(void);
	void	print_contact(void);
	void	search(void);
};

#endif