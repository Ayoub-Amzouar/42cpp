#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base*	generate( void )
{
	Base*	ptr;
	int		id;

	std::srand(time(0));
	id = std::rand() % 3;
	switch (id)
	{
		case 0:
			ptr = new A;
			break;
		case 1:
			ptr = new B;
			break;
		case 2:
			ptr = new C;
			break;
	};
	return (ptr);
}

void	identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify( Base& p )
{
	try
	{
		Base& var = dynamic_cast<A&>(p);
		(void)var;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			Base& var = dynamic_cast<B&>(p);
			(void)var;
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				Base& var = dynamic_cast<C&>(p);
				(void)var;
				std::cout << "C" << std::endl;
			}
			catch(...) {}
		}
	}
}

int     main( void )
{
	Base*			p;
	Base* const &	r = generate();

	p = generate();
	identify(p);
	identify(*r);
	return (0);
}