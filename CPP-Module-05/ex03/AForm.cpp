/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AForm.cpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/13 20:41:04 by Mr. Norkum                               */
/*   Updated: 2024/01/13 20:41:06 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* ****************************************************************************** */
/*                        Orthodox Canonical Form                                 */
/*                                                                                */
/*   ->AForm::AForm(void);                                                        */
/*   ->AForm::AForm(const string name);                                           */
/*   ->AForm::AForm(const string name, const int signGrade, const int execGrade); */
/*   ->AForm::AForm(const AForm& copy);                                           */
/*   ->AForm::~AForm(void);                                                       */
/*                                                                                */
/*   ->AForm&   AForm::operator=(const AForm& other);                             */
/*                                                                                */
/* ****************************************************************************** */


AForm::AForm(void) : _name("Default AForm"), _signGrade(low), _execGrade(low)
{
	cout << "Default constructor called (AForm)" << endl;
	setIsSigned(false);
}

AForm::AForm(const string name) : _name(name), _signGrade(low), _execGrade(low)
{
	cout << "Name parameterized constructor called (AForm)" << endl;
	setIsSigned(false);
}

AForm::AForm(const string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	cout << "Multi parameterized constructor called (AForm)" << endl;
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

AForm::AForm(const AForm &copy) : _name(copy.getName()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	cout << "Copy constructor called (AForm)" << endl;
	this->_isSigned = copy.getIsSigned();
}

AForm::~AForm(void)
{
	cout << "Destructor called (AForm)" << endl;
}

AForm&	AForm::operator=(const AForm& other)
{
	cout << "Copy assignment operator called (AForm)" << endl;
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
/*   ->void             AForm::setName(const string name);                    */
/*   ->void             AForm::setSignGrade(const int signGrade);             */
/*   ->void             AForm::setExecGrade(const int execGrade);             */
/*   ->void             AForm::setIsSigned(bool isSigned);                    */
/*                                                                            */
/*   ->const string&    AForm::getName(void) const;                           */
/*   ->const int&       AForm::getSignGrade(void) const;                      */
/*   ->const int&       AForm::getExecGrade(void) const;                      */
/*   ->const bool       AForm::getIsSigned(void) const;                       */
/*                                                                            */
/* ************************************************************************** */

void	AForm::setName(const string name)
{
	const_cast<string&>(this->_name) = name;
}

void	AForm::setSignGrade(const int signGrade)
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

void	AForm::setExecGrade(const int execGrade)
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

void	AForm::setIsSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

const string&	AForm::getName(void) const
{
	return (this->_name);
}

const int&	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

const int&	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

const bool&	AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

/* ************************************************************************** */
/*                           Member Functions                                 */
/*                                                                            */
/*   ->void    AForm::beSigned(const Bureaucrat& bureaucrat);                 */
/*   ->virtual void    AForm::execute(Bureaucrat const& executor) const = 0;  */
/*                                                                            */
/* ************************************************************************** */

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getSignGrade())
		throw GradeTooLowException();

	cout << bureaucrat.getName() << " signed " << getName() << endl;
	setIsSigned(true);
}

/* ************************************************************************** */
/*                           Nested Classes                                   */
/*                                                                            */
/*   ->const char *AForm::GradeTooHighException::what() const throw();        */
/*   ->const char *AForm::GradeTooLowException::what() const throw();         */
/*   ->const char *AForm::FormNotSignedException::what() const throw();       */
/*                                                                            */
/* ************************************************************************** */

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high (Form)");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low (Form)");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form needs to be signed before executing");
}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->ostream&    operator<<(ostream& out, const Form& form);                */
/*                                                                            */
/* ************************************************************************** */

ostream&	operator<<(ostream& out, const AForm& form)
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
