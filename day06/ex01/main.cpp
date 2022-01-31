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
	uintptr_t   raw;

    ptr = new Data;
	std::cout << "Data pointer:        " << ptr << std::endl;
    raw = serialize(ptr);
	std::cout << "Deserialize pointer: " << deserialize(raw) << std::endl;
    delete ptr;
	return (0);
}