/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   RobotomyRequestForm.cpp                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/25 17:37:07 by Mr. Norkum                               */
/*   Updated: 2024/01/25 17:37:09 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ******************************************************************************************** */
/*                        Orthodox Canonical Form                                               */
/*                                                                                              */
/*   ->RobotomyRequestForm::RobotomyRequestForm(void); (private)                                */
/*   ->RobotomyRequestForm::RobotomyRequestForm(const string name);                             */
/*   ->RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy);               */
/*   ->RobotomyRequestForm::~RobotomyRequestForm(void);                                         */
/*                                                                                              */
/*   ->RobotomyRequestForm&   RobotomyRequestForm::operator=(const RobotomyRequestForm& other); */
/*                                                                                              */
/* ******************************************************************************************** */

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Default Form", 145, 137)
{
	cout << "Default constructor called (RobotomyRequestForm)" << endl;
	setTarget("Default Target");
}

RobotomyRequestForm::RobotomyRequestForm(const string target) : AForm("Robotomy Request Form", 145, 137)
{
	cout << "Name parameterized constructor called (RobotomyRequestForm)" << endl;
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	cout << "Copy constructor called (RobotomyRequestForm)" << endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	cout << "Destructor called (RobotomyRequestForm)" << endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	cout << "Assignment operator called (RobotomyRequestForm)" << endl;
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<string&>(this->_target) = other.getTarget();
	}
	return (*this);
}

/* ************************************************************************ */
/*                           Setters and Getters                            */
/*                                                                          */
/*   ->void            RobotomyRequestForm::setTarget(const string target); */
/*                                                                          */
/*   ->const string&   RobotomyRequestForm::getTarget(void) const;          */
/*                                                                          */
/* ************************************************************************ */

void	RobotomyRequestForm::setTarget(const string target)
{
	const_cast<string&>(this->_target) = target;
}

const string&	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

/* ************************************************************************** */
/*                           Member Functions                                 */
/*                                                                            */
/*   ->void   RobotomyRequestForm::execute(Bureaucrat const& executor) const; */
/*                                                                            */
/* ************************************************************************** */

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getIsSigned() == false)
	{
		cout << "The form can't be executed because ";
		throw AForm::FormNotSignedException();
	}
	else if (executor.getGrade() > this->getExecGrade())
	{
		cout << "The form can't be executed because ";
		throw AForm::GradeTooLowException();
	}
	srand(time(NULL));
	cout << "* some drilling noises *" << endl;
	if (rand() % 2 == 0)
	{
		cout << getTarget() << " has been robotomized succesfully" << endl;
	}
	else
	{
		cout << "Failed to robotomized " << getTarget() << endl;
	}
}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->ostream&    operator<<(ostream& out, const RobotomyRequestForm& form); */
/*                                                                            */
/* ************************************************************************** */


ostream&	operator<<(ostream& out, const RobotomyRequestForm& form)
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
