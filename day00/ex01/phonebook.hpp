#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class phonebook
{
public:
	contact m_contact[8];
	void	add(void);
	void	search(void);
};

#endif