#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	WrongAnimal*	k = new WrongCat();
	WrongCat		y;

	std::cout << "-------------- Type --------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "-------------- makeSound --------------" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	k->makeSound();
	y.makeSound();

	std::cout << "-------------- Destructors --------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete k;
	return (0);
}