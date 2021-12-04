#include <iostream>

int		main(void)
{
	std::string		brain;
	std::string*	stringPTR;
	std::string&	stringREF = brain;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "Address of brain:                 " << &brain << std::endl;
	std::cout << "Address of brain using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of brain using stringREF: " << &brain << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "Brain displyed using stringPTR: " << *stringPTR << std::endl;
	std::cout << "Brain displyed using stringREF: " << stringREF << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	return (0);
}