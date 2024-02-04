/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PresidentialPardonForm.cpp                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/25 17:37:07 by Mr. Norkum                               */
/*   Updated: 2024/01/25 17:37:09 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ***************************************************************************************************** */
/*                        Orthodox Canonical Form                                                        */
/*                                                                                                       */
/*   ->PresidentialPardonForm::PresidentialPardonForm(void); (private)                                   */
/*   ->PresidentialPardonForm::PresidentialPardonForm(const string target);                              */
/*   ->PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy);               */
/*   ->PresidentialPardonForm::~PresidentialPardonForm(void);                                            */
/*                                                                                                       */
/*   ->PresidentialPardonForm&   PresidentialPardonForm::operator=(const PresidentialPardonForm& other); */
/*                                                                                                       */
/* ***************************************************************************************************** */

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Default Form", 145, 137)
{
	cout << "Default constructor called (PresidentialPardonForm)" << endl;
	setTarget("Default Target");
}

PresidentialPardonForm::PresidentialPardonForm(const string target) : AForm("Presidential Pardon Form", 145, 137)
{
	cout << "Name parameterized constructor called (PresidentialPardonForm)" << endl;
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	cout << "Copy constructor called (PresidentialPardonForm)" << endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	cout << "Destructor called (RobotomyRequestForm)" << endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	cout << "Assignment operator called (RobotomyRequestForm)" << endl;
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<string&>(this->_target) = other.getTarget();
	}
	return (*this);
}

/* *************************************************************************** */
/*                           Setters and Getters                               */
/*                                                                             */
/*   ->void            PresidentialPardonForm::setTarget(const string target); */
/*                                                                             */
/*   ->const string&   PresidentialPardonForm::getTarget(void) const;          */
/*                                                                             */
/* *************************************************************************** */

void	PresidentialPardonForm::setTarget(const string target)
{
	const_cast<string&>(this->_target) = target;
}

const string&	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/* ***************************************************************************** */
/*                           Member Functions                                    */
/*                                                                               */
/*   ->void   PresidentialPardonForm::execute(Bureaucrat const& executor) const; */
/*                                                                               */
/* ***************************************************************************** */

void	PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (getIsSigned() == false)
	{
		cout << "The form can't be executed because ";
		throw AForm::FormNotSignedException();
	}
	else if (bureaucrat.getGrade() > getExecGrade())
	{
		cout << "The form can't be executed because ";
		throw AForm::GradeTooLowException();
	}
	cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << endl;
}

/* *************************************************************************** */
/*                           Non Member Functions                              */
/*                                                                             */
/*   ->ostream&  operator<<(ostream& out, const PresidentialPardonForm& form); */
/*                                                                             */
/* *************************************************************************** */


ostream&	operator<<(ostream& out, const PresidentialPardonForm& form)
{
	out << "------------- Form Info -------------" << endl;
	out << "Form: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") << endl;
	out << "Form Target: " << form.getTarget() << endl;
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
