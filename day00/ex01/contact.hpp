#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <iostream>

class contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	static int	spot;
	static int	filled;
	static void	increment(void);

	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getPhonenumber( void ) const;
	std::string	getDarkestSecret( void ) const;
	
	void	setFirstName( const std::string& );
	void	setLastName( const std::string& );
	void	setNickname( const std::string& );
	void	setPhonenumber( const std::string& );
	void	setDarkestSecret( const std::string& );
};

#endif