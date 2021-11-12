#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iomanip> 
#include "contact.hpp"
#include "color.hpp"

class phonebook
{
public:
	contact		 m_contact[8];
	void		verify_command(const std::string&);
	void		add(void);
	std::string	truncate(const std::string&);
	void		print_contact(void);
	void		search(void);
};

#endif