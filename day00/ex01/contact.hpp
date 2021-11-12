#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>

class contact
{
public:
	static int	spot;
	static int	filled;
	static void	increment(void);
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif