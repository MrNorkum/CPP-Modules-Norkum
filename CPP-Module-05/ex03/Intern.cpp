/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Intern.cpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/26 05:33:00 by Mr. Norkum                               */
/*   Updated: 2024/01/26 05:33:01 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* ****************************************************************************** */
/*                        Orthodox Canonical Form                                 */
/*                                                                                */
/*   ->Intern::Intern(void);                                                      */
/*   ->Intern::Intern(const Intern& copy);                                        */
/*   ->Intern::~Intern(void);                                                     */
/*                                                                                */
/*   ->Intern&   Intern::operator=(const Intern& other);                          */
/*                                                                                */
/* ****************************************************************************** */

Intern::Intern(void)
{
	cout << "Default constructor called (Intern)" << endl;
}

Intern::Intern(const Intern &copy)
{
	cout << "Copy constructor called (Intern)" << endl;
	*this = copy;
}

Intern::~Intern(void)
{
	cout << "Destructor called (Intern)" << endl;
}

Intern&	Intern::operator=(const Intern& other)
{
	cout << "Assignment operator called (Intern)" << endl;
	if (this != &other)
		return (*this);
	return (*this);
}

/* ************************************************************************** */
/*                         Private Member Functions                           */
/*                                                                            */
/*   ->AForm*   Intern::_makeShrubberyCreationForm(const string target);      */
/*   ->AForm*   Intern::_makeRobotomyRequestForm(const string target);        */
/*   ->AForm*   Intern::_makePresidentialPardonForm(const string target);     */
/*                                                                            */
/* ************************************************************************** */

AForm*	Intern::_makeShrubberyCreationForm(const string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::_makeRobotomyRequestForm(const string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::_makePresidentialPardonForm(const string target)
{
	return (new PresidentialPardonForm(target));
}

/* ************************************************************************** */
/*                           Member Functions                                 */
/*                                                                            */
/*   ->AForm*   Intern::makeForm(const string formName, const string target); */
/*                                                                            */
/* ************************************************************************** */

AForm*	Intern::makeForm(const string formName, const string target)
{
	AForm	*(Intern::*formArray[3])(const string target) =
	{
		&Intern::_makeShrubberyCreationForm,
		&Intern::_makeRobotomyRequestForm,
		&Intern::_makePresidentialPardonForm
	};

	string	formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			cout << "Intern creates " << formName << endl;
			return ((this->*(formArray[i]))(target));
		}
	}
	cout << "Intern could not create " << formName << endl;
	return (0);
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
