#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template<typename T>
class Array
{
public:
	Array( void )
	{
		this->_arr = NULL;
		this->_size = 0;
	}
	Array( unsigned int n ) 
	{
		this->_arr = new T[n];
		this->_size = n;
		for (unsigned int i = 0; i < n; i++)
			this->_arr[i] = T();
	}
	Array( Array const &copy )
	{
		this->_size = copy.size();
		this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = copy._arr[i];
	}
	Array& operator=( Array const &rop )
	{
		if (&rop == this)
			return (*this);
		if (this->_size < rop.size())
		{
			delete [] this->_arr;
			this->_arr = new T[rop.size()];
			this->_size = rop.size();
		}
		for (unsigned int i = 0; i < rop.size(); i++)
			this->_arr[i] = rop._arr[i];
		return (*this);
	}
	T&	operator[]( unsigned int i )
	{
		if (i > this->_size || this->_size == 0)
		{
			throw IndexOutOfBounds();
			return (this->_arr[0]);
		}
		return (this->_arr[i]);
	}
	class	IndexOutOfBounds : public std::exception
	{
		public:
			const char *what( void ) const throw()
			{
				return ("Error: Index Out Of Bounds");
			}
	};
	~Array( void )
	{
		if (this->_size != 0)
			delete [] this->_arr;
	}
	int		size( void ) const { return (this->_size); }
private:
	T				*_arr;
	unsigned int	_size;
};

#endif