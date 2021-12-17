#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

class Form
{
private:
	const	std::string name;
	bool				isSigned;
	const	int			signGrade;
	const	int			execGrade;
public:
	Form( std::string&, int, int );
	Form( const Form& );
	Form&	operator=( const Form& );
	~Form( void );

	std::string	getName( void ) const;
	bool		getIsSigned( void ) const;
	int			getSignGrade( void ) const;
	int			getExecGrade( void ) const;

	void	beSigned( const Bureaucrat& );

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

std::ostream&	operator<<( std::ostream&, const Form& );

#endif