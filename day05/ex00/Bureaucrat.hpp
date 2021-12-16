#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string	name;
	const int			grade;
public:
	Bureaucrat( const std::string&, const int );
	Bureaucrat( const Bureaucrat& );
	Bureaucrat&	operator=( const Bureaucrat& );
	~Bureaucrat();

	std::string	getName( void ) const;
	int			getGrade( void ) const;

	class GradeTooHighException : public std::exception
	{
		public:
			const char*	what( void ) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char*	what( void ) const throw();
	};
};

#endif
