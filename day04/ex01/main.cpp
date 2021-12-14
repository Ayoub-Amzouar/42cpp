#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	Animal		*animalObj[4];

	/*---------------- START TESTS ----------------*/
	
	animalObj[0] = new Cat();
	animalObj[1] = new Cat();
	animalObj[2] = new Dog();
	animalObj[3] = new Dog();
	
	for (int i = 0; i < 4; i++)
		delete animalObj[i];
	{
		std::cout << "################# Dog ################" << std::endl;

		Dog	dogObj1;
		Dog	dogObj2;

		dogObj1 = dogObj2;
		std::cout << "----------> " << dogObj2.getBrain() << std::endl;
		std::cout << "----------> " << dogObj1.getBrain() << std::endl;
	}
	{
		std::cout << "################# Cat ################" << std::endl;

		Cat	catObj1;
		Cat	catObj2;

		catObj1 = catObj2;
		std::cout << "----------> " << catObj2.getBrain() << std::endl;
		std::cout << "----------> " << catObj1.getBrain() << std::endl;
	}
	
	/*---------------- END TESTS ----------------*/

	return (0);
}