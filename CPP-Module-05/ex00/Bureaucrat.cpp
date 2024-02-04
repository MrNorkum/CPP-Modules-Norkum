/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Bureaucrat.cpp                                                           */
/*                                                                            */
/*   By: mrnorkum <mrnorkum@gmail.com>                                        */
/*                                                                            */
/*   Created: 2024/01/10 18:08:20 by Mr. Norkum                               */
/*   Updated: 2024/01/10 18:13:03 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************************************************** */
/*                        Orthodox Canonical Form                             */
/*                                                                            */
/*   ->Bureaucrat::Bureaucrat(void);                                          */
/*   ->Bureaucrat::Bureaucrat(const string name, const int grade);            */
/*   ->Bureaucrat::Bureaucrat(const Bureaucrat& copy);                        */
/*   ->Bureaucrat::~Bureaucrat(void);                                         */
/*                                                                            */
/*   ->Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy);             */
/*                                                                            */
/* ************************************************************************** */

Bureaucrat::Bureaucrat(void)
{
	cout << "Default constructor called (Bureaucrat)" << endl;
	setName("Default");
	setGrade(low);
}

Bureaucrat::Bureaucrat(const string name, const int grade)
{
	cout << "Parameterized constructor called (Bureaucrat)" << endl;
	if (grade < high)
	{
		throw GradeTooHighException();
	}
	else if (grade > low)
	{
		throw GradeTooLowException();
	}
	setName(name);
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	cout << "Copy constructor called (Bureaucrat)" << endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
	cout << "Destructor called (Bureaucrat)" << endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	cout << "Assignation operator called (Bureaucrat)" << endl;
	if (this != &other)
	{
		const_cast<string &>(this->_name) = other.getName();
		this->_grade = other.getGrade();
	}
	return (*this);
}

/* ************************************************************************** */
/*                           Setters and Getters                              */
/*                                                                            */
/*   ->void             Bureaucrat::setName(const string name);               */
/*   ->void             Bureaucrat::setGrade(const int grade);                */
/*   ->const string&    Bureaucrat::getName(void) const;                      */
/*   ->const int&       Bureaucrat::getGrade(void) const;                     */
/*                                                                            */
/* ************************************************************************** */

void	Bureaucrat::setName(const string name)
{
	const_cast<string&>(this->_name) = name;
}

void Bureaucrat::setGrade(const int grade)
{
	if (grade < high)
	{
		throw GradeTooHighException();
	}
	else if (grade > low)
	{
		throw GradeTooLowException();
	}
	this->_grade = grade;
}

const string&	Bureaucrat::getName(void) const
{
	return (this->_name);
}

const int&	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/* ************************************************************************** */
/*                           Member Functions                                 */
/*                                                                            */
/*   ->void    Bureaucrat::incrementGrade(void);                              */
/*   ->void    Bureaucrat::incrementGrade(const unsigned int amount);         */
/*   ->void    Bureaucrat::decrementGrade(void);                              */
/*   ->void    Bureaucrat::decrementGrade(const unsigned int amount);         */
/*                                                                            */
/* ************************************************************************** */

void Bureaucrat::incrementGrade(void)
{
	if (getGrade() - 1 < high)
	{
		throw GradeTooHighException();
	}
	setGrade(getGrade() - 1);
}

void Bureaucrat::incrementGrade(const unsigned int amount)
{
	if (getGrade() - amount < high)
	{
		throw GradeTooHighException();
	}
	setGrade(getGrade() - amount);
}

void Bureaucrat::decrementGrade(void)
{
	if (getGrade() + 1 > low)
	{
		throw GradeTooLowException();
	}
	setGrade(getGrade() + 1);
}

void Bureaucrat::decrementGrade(const unsigned int amount)
{
	if (getGrade() + amount > low)
	{
		throw GradeTooLowException();
	}
	setGrade(getGrade() + amount);
}

/* ************************************************************************** */
/*                           Nested Classes                                   */
/*                                                                            */
/*   ->const char *Bureaucrat::GradeTooHighException::what() const throw();   */
/*   ->const char *Bureaucrat::GradeTooLowException::what() const throw();    */
/*                                                                            */
/* ************************************************************************** */

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->ostream&    operator<<(ostream &out, const Bureaucrat& bureaucrat);    */
/*                                                                            */
/* ************************************************************************** */

ostream&	operator<<(ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
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
