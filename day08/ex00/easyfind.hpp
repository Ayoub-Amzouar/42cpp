#ifndef __EASY_FIND_HPP__
#define __EASY_FIND_HPP__

#include <algorithm>
#include <iostream>

class	IntegerNotFound : public std::exception
{
public:
	const char *what( void ) const throw()
	{
		return("Error: There was no occurance of the required integer");
	}
};

template <typename T>
typename T::iterator	easyFind(T cont, int to_find)
{
	typename	T::iterator it;
	it = std::find(cont.begin(), cont.end(), to_find);
	if (*(it) != to_find)
		throw IntegerNotFound();
	return (it);
}

#endif