#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t   serialize( Data* ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data*>(raw));
}

int     main( void )
{
	Data*       ptr;
	Data*       tmp;
	uintptr_t   raw;

    ptr = new Data;
	ptr->age = 25;
	std::cout << "Data pointer:        " << ptr << std::endl;
    raw = serialize(ptr);
	tmp = deserialize(raw);
	std::cout << "Deserialize pointer: " << tmp << "\nAnd the age value is: " << tmp->age << std::endl;
    delete ptr;
	return (0);
}