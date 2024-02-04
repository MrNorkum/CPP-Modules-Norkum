/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ShrubberyCreationForm.cpp                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/25 17:37:07 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/25 17:37:09 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ************************************************************************************************** */
/*                        Orthodox Canonical Form                                                     */
/*                                                                                                    */
/*   ->ShrubberyCreationForm::ShrubberyCreationForm(void); (private)                                  */
/*   ->ShrubberyCreationForm::ShrubberyCreationForm(const string name);                               */
/*   ->ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy);               */
/*   ->ShrubberyCreationForm::~ShrubberyCreationForm(void);                                           */
/*                                                                                                    */
/*   ->ShrubberyCreationForm&   ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other); */
/*                                                                                                    */
/* ************************************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Default Form", 145, 137)
{
	cout << "Default constructor called (ShrubberyCreationForm)" << endl;
	setTarget("Default Target");
}

ShrubberyCreationForm::ShrubberyCreationForm(const string target) : AForm("Shrubbery Creation Form", 145, 137)
{
	cout << "Name parameterized constructor called (ShrubberyCreationForm)" << endl;
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	cout << "Copy constructor called (ShrubberyCreationForm)" << endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	cout << "Destructor called (ShrubberyCreationForm)" << endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	cout << "Assignment operator called (ShrubberyCreationForm)" << endl;
	if (this != &other)
	{
		AForm::operator=(other);
		const_cast<string&>(this->_target) = other.getTarget();
	}
	return (*this);
}

/* ************************************************************************** */
/*                           Setters and Getters                              */
/*                                                                            */
/*   ->void            ShrubberyCreationForm::setTarget(const string target); */
/*                                                                            */
/*   ->const string&   ShrubberyCreationForm::getTarget(void) const;          */
/*                                                                            */
/* ************************************************************************** */

void	ShrubberyCreationForm::setTarget(const string target)
{
	const_cast<string&>(this->_target) = target;
}

const string&	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/* **************************************************************************** */
/*                           Member Functions                                   */
/*                                                                              */
/*   ->void   ShrubberyCreationForm::execute(Bureaucrat const& executor) const; */
/*                                                                              */
/* **************************************************************************** */

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > getExecGrade())
	{
		cout << "The form can't be executed because ";
		throw AForm::GradeTooLowException();
	}
	else if (getIsSigned() == false)
	{
		cout << "The form can't be executed because ";
		throw AForm::FormNotSignedException();
	}
	ofstream out;

	out.open((getTarget() + "_shrubbery").c_str(), ofstream::in | ofstream::trunc);

	out << "      /\\      " << endl;
	out << "     /\\*\\    " << endl;
	out << "    /\\O\\*\\    " << endl;
	out << "   /*/\\/\\/\\   " << endl;
	out << "  /\\O\\/\\*\\/\\  " << endl;
	out << " /\\*\\/\\*\\/\\/\\ " << endl;
	out << "/\\O\\/\\/*/\\/O/\\" << endl;
	out << "      ||      " << endl;
	out << "      ||      " << endl;
	out << "      ||      " << endl;

	out.close();
}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->ostream&  operator<<(ostream& out, const ShrubberyCreationForm& form); */
/*                                                                            */
/* ************************************************************************** */


ostream&	operator<<(ostream& out, const ShrubberyCreationForm& form)
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
