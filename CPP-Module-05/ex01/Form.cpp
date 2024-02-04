/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Form.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/13 20:41:04 by Mr. Norkum                               */
/*   Updated: 2024/01/13 20:41:06 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* **************************************************************************** */
/*                        Orthodox Canonical Form                               */
/*                                                                              */
/*   ->Form::Form(void);                                                        */
/*   ->Form::Form(const string name);                                           */
/*   ->Form::Form(const string name, const int signGrade, const int execGrade); */
/*   ->Form::Form(const Form& copy);                                            */
/*   ->Form::~Form(void);                                                       */
/*                                                                              */
/*   ->Form&   Form::operator=(const Form& other);                              */
/*                                                                              */
/* **************************************************************************** */


Form::Form(void) : _name("Default Form"), _signGrade(low), _execGrade(low)
{
	cout << "Default constructor called (Form)" << endl;
	setIsSigned(false);
}

Form::Form(const string name) : _name(name), _signGrade(low), _execGrade(low)
{
	cout << "Name parameterized constructor called (Form)" << endl;
	setIsSigned(false);
}

Form::Form(const string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	cout << "Multi parameterized constructor called (Form)" << endl;
	if (signGrade < high || execGrade < high)
	{
		throw GradeTooHighException();
	}
	else if (signGrade > low || execGrade > low)
	{
		throw GradeTooLowException();
	}
	setIsSigned(false);
}

Form::Form(const Form& copy) : _name(copy.getName()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	cout << "Copy constructor called (Form)" << endl;
	this->_isSigned = copy.getIsSigned();
}

Form::~Form(void)
{
	cout << "Destructor called (Form)" << endl;
}

Form&	Form::operator=(const Form& other)
{
	cout << "Copy assignment operator called (Form)" << endl;
	if (this != &other)
	{
		const_cast<string&>(this->_name) = other.getName();
		const_cast<int&>(this->_signGrade) = other.getSignGrade();
		const_cast<int&>(this->_execGrade) = other.getExecGrade();
		this->_isSigned = other.getIsSigned();
	}
	return (*this);
}

/* ************************************************************************** */
/*                           Setters and Getters                              */
/*                                                                            */
/*   ->void             Form::setName(const string name);                     */
/*   ->void             Form::setSignGrade(const int signGrade);              */
/*   ->void             Form::setExecGrade(const int execGrade);              */
/*   ->void             Form::setIsSigned(bool isSigned);                     */
/*                                                                            */
/*   ->const string&    Form::getName(void) const;                            */
/*   ->const int&       Form::getSignGrade(void) const;                       */
/*   ->const int&       Form::getExecGrade(void) const;                       */
/*   ->const bool       Form::getIsSigned(void) const;                        */
/*                                                                            */
/* ************************************************************************** */

void	Form::setName(const string name)
{
	const_cast<string&>(this->_name) = name;
}

void	Form::setSignGrade(const int signGrade)
{
	if (signGrade > low)
	{
		throw GradeTooLowException();
	}
	else if (signGrade < high)
	{
		throw GradeTooHighException();
	}
	const_cast<int&>(this->_signGrade) = signGrade;
}

void	Form::setExecGrade(const int execGrade)
{
	if (execGrade > low)
	{
		throw GradeTooLowException();
	}
	else if (execGrade < high)
	{
		throw GradeTooHighException();
	}
	const_cast<int&>(this->_execGrade) = execGrade;
}

void	Form::setIsSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

const string&	Form::getName(void) const
{
	return (this->_name);
}

const int&	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

const int&	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

const bool&	Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

/* ************************************************************************** */
/*                           Member Functions                                 */
/*                                                                            */
/*   ->void    Form::beSigned(const Bureaucrat& bureaucrat);                  */
/*                                                                            */
/* ************************************************************************** */

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getSignGrade())
		throw GradeTooLowException();

	cout << bureaucrat.getName() << " signed " << getName() << endl;
	setIsSigned(true);
}

/* ************************************************************************** */
/*                           Nested Classes                                   */
/*                                                                            */
/*   ->const char *Form::GradeTooHighException::what() const throw();         */
/*   ->const char *Form::GradeTooLowException::what() const throw();          */
/*                                                                            */
/* ************************************************************************** */

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high (Form)");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low (Form)");
}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->ostream&    operator<<(ostream& out, const Form& form);                */
/*                                                                            */
/* ************************************************************************** */

ostream&	operator<<(ostream& out, const Form& form)
{
	out << "------------- Form Info -------------" << endl;
	out << "Form: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") << endl;
	out << "Grade to sign: " << form.getSignGrade() << endl;
	out << "Grade to execute: " << form.getExecGrade();
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
