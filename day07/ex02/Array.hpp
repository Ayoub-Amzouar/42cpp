#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

template<typename T>
class Array
{
public:
	Array( void )
	{
		this->_a = new T;
		this->_size = 0;
	}
	Array( unsigned int n ) 
	{
		this->_a = new T[n];
		this->_size = n;
	}
	Array( Array const &copy )
	{
		for (int i = 0; i < _size; i++)
			this->_a[i] = copy._a[i];
	}
	Array& operator=( Array const &rop )
	{
		if (&rop == this)
			return (this);
		for (int i = 0; i < _size; i++)
			this->_a[i] = copy._a[i];
		return (*this);
	}
	~Array( void )
	{
		if (_size != 0)
			delete [] this->_a;
		else
			delete this->_a;
	}
	int		size( void ) { return (this->_size); }
private:
	T	*_a;
	int	_size;
};

#endif