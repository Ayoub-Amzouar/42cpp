#include "ShrubberyCreationForm.hpp"

/*
	Orthodox Canonical ShrubberyCreationForm
*/

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& Target ) : Form("Default", 145, 137), target(Target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copyObj ) : Form("Default", 145, 137), target(copyObj.getTarget()) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rop )
{
	if (this != &rop)
		this->target = rop.getTarget();
	return (*this);	
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

/*
	Accessors
*/

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (target);
}

/*
	Required Functions
*/

void	ShrubberyCreationForm::action( void )
{
	std::string		fileName;
	std::ofstream	outFile;

	fileName = target + "_shrubbery";
	outFile.open(fileName);
	if (outFile.is_open())
	{
		for ( int i = 0; i < 3; i++ )
		{
			outFile << "	                                                         ." << std::endl;
			outFile << "                                          .         ;  " << std::endl;
			outFile << "             .              .              ;%     ;;   " << std::endl;
			outFile << "               ,           ,                :;%  %;   " << std::endl;
			outFile << "                :         ;                   :;%;'     .,   " << std::endl;
			outFile << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
			outFile << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
			outFile << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
			outFile << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
			outFile << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
			outFile << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
			outFile << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
			outFile << "                  `@%:.  :;%.         ;@@%;'   " << std::endl;
			outFile << "                    `@%.  `;@%.      ;@@%;         " << std::endl;
			outFile << "                      `@%%. `@%%    ;@@%;        " << std::endl;
			outFile << "                        ;@%. :@%%  %@@%;       " << std::endl;
			outFile << "                          %@bd%%%bd%%:;     " << std::endl;
			outFile << "                            #@%%%%%:;;" << std::endl;
			outFile << "                            %@@%%%::;" << std::endl;
			outFile << "                            %@@@%(o);  . '         " << std::endl;
			outFile << "                            %@@@o%;:(.,'         " << std::endl;
			outFile << "                        `.. %@@@o%::;         " << std::endl;
			outFile << "                           `)@@@o%::;         " << std::endl;
			outFile << "                            %@@(o)::;        " << std::endl;
			outFile << "                           .%@@@@%::;         " << std::endl;
			outFile << "                           ;%@@@@%::;.          " << std::endl;
			outFile << "                          ;%@@@@%%:;;;. " << std::endl;
			outFile << "                      ...;%@@@@@%%:;;;;,.. " << std::endl;
			outFile << std::endl;
		}
		outFile.close();
	}
	else
		std::cerr << "Error: can't open file " << fileName << std::endl;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executer )
{
	if ( this->getIsSigned() == true && executer.getGrade() <= this->getExecGrade())
		action();
	else if (!(this->getIsSigned()))
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooHighException(); 
}