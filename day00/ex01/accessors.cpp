#include "contact.hpp"

/*
	Getters
*/

std::string	contact::getFirstName( void ) const
{
	return (first_name);
}

std::string	contact::getLastName( void ) const
{
	return (last_name);
}

std::string	contact::getNickname( void ) const
{
	return (nickname);
}

std::string	contact::getPhonenumber( void ) const
{
	return (phone_number);
}

std::string	contact::getDarkestSecret( void ) const
{
	return (darkest_secret);
}

/*
	Setters
*/

void	contact::setFirstName( const std::string& val )
{
	first_name = val;
}

void	contact::setLastName( const std::string& val )
{
	last_name = val;
}

void	contact::setNickname( const std::string& val )
{
	nickname = val;
}

void	contact::setPhonenumber( const std::string& val )
{
	phone_number = val;
}

void	contact::setDarkestSecret( const std::string& val )
{
	darkest_secret = val;
}