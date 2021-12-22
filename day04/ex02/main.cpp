#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "-------------- Type --------------" << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "-------------- makeSound --------------" << std::endl;
	i->makeSound();
	j->makeSound();

	std::cout << "-------------- Destructors --------------" << std::endl;
	delete j;
	delete i;
	{
		std::cout << "-------------- Dog --------------" << std::endl;

		Dog	dogObj1;
		Dog	dogObj2;

		dogObj1 = dogObj2;
		std::cout << "----------> " << dogObj2.getBrain() << std::endl;
		std::cout << "----------> " << dogObj1.getBrain() << std::endl;
	}
	{
		std::cout << "--------------  Cat --------------" << std::endl;

		Cat	catObj1;
		Cat	catObj2;

		catObj1 = catObj2;
		std::cout << "----------> " << catObj2.getBrain() << std::endl;
		std::cout << "----------> " << catObj1.getBrain() << std::endl;
	}
	return (0);
}