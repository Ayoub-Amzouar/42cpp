#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>

class Bureaucrat;

class Form
{
private:
	const	std::string name;
	bool				isSigned;
	const	int			signGrade;
	const	int			execGrade;
public:
	Form( const std::string&, int, int );
	Form( const Form& );
	Form&	operator=( const Form& );
	virtual ~Form( void );

	std::string	getName( void ) const;
	bool		getIsSigned( void ) const;
	int			getSignGrade( void ) const;
	int			getExecGrade( void ) const;

	void	beSigned( Bureaucrat& );

	virtual void	execute( Bureaucrat const & ) = 0;

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
	class	FormNotSigned : public std::exception
	{
		public:
			const char*	what( void ) const throw();
	};
};

std::ostream&	operator<<( std::ostream&, const Form& );

#endif