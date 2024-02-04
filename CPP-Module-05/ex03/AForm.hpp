/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AForm.hpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/13 18:41:18 by Mr. Norkum                               */
/*   Updated: 2024/01/13 18:41:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

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
/*                                AForm Class                                 */
/* ************************************************************************** */

class Bureaucrat;

class AForm
{
private:
	const string	_name;
	const int		_signGrade;
	const int		_execGrade;
	bool			_isSigned;
public:
	//Orthodox Canonical Form
	AForm(void);
	AForm(const string name);
	AForm(const string name, const int signGrade, const int execGrade);
	AForm(const AForm& copy);
	virtual ~AForm(void);
	AForm&	operator=(const AForm& other);

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
	virtual void	execute(Bureaucrat const& executor) const = 0;

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
	class FormNotSignedException : public exception
	{
	public:
		virtual const char *what() const throw();
	};
};

//Non Member functions
ostream&	operator<<(ostream& out, const AForm& form);

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
