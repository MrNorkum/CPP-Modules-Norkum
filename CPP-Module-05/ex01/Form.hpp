/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Form.hpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/13 18:41:18 by Mr. Norkum                               */
/*   Updated: 2024/01/13 18:41:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define ostream std::ostream
#define exception std::exception

#define high 1
#define low 150

/* ************************************************************************** */
/*                                 Form Class                                 */
/* ************************************************************************** */

class Bureaucrat;

class Form
{
private:
	const string	_name;
	const int		_signGrade;
	const int		_execGrade;
	bool			_isSigned;
public:
	//Orthodox Canonical Form
	Form(void);
	Form(const string name);
	Form(const string name, const int signGrade, const int execGrade);
	Form(const Form& copy);
	~Form(void);
	Form&	operator=(const Form& other);

	//Setters and Getters
	void			setName(const string name);
	void			setSignGrade(const int signGrade);
	void			setExecGrade(const int execGrade);
	void			setIsSigned(bool isSigned);
	const string&	getName(void) const;
	const int&		getSignGrade(void) const;
	const int&		getExecGrade(void) const;
	const bool&		getIsSigned(void) const;

	//Member functions
	void			beSigned(const Bureaucrat& bureaucrat);

	//Nested class
	class GradeTooHighException : public exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public exception
	{
	public:
		virtual const char *what() const throw();
	};
};

//Non Member functions
ostream&	operator<<(ostream& out, const Form& form);

#endif

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
