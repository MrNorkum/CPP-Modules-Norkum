/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Intern.hpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/26 05:32:54 by Mr. Norkum                               */
/*   Updated: 2024/01/26 05:32:55 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*                                Intern Class                                */
/* ************************************************************************** */

class AForm;

class Intern
{
private:
	//Private Member Functions
	AForm*	_makeShrubberyCreationForm(const string target);
	AForm*	_makeRobotomyRequestForm(const string target);
	AForm*	_makePresidentialPardonForm(const string target);
public:
	//Orthodox Canonical Form
	Intern(void);
	Intern(const Intern& copy);
	~Intern(void);
	Intern&	operator=(const Intern& other);

	//Member functions
	AForm*	makeForm(const string formName, const string target);
};

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
