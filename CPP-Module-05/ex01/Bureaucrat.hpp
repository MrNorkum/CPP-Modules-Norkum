/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Bureaucrat.hpp                                                           */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 18:26:39 by Mr. Norkum                               */
/*   Updated: 2024/01/10 18:26:42 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define ostream std::ostream
#define exception std::exception

#define high 1
#define low 150


/* ************************************************************************** */
/*                             Bureaucrat Class                               */
/* ************************************************************************** */

class Form;

class Bureaucrat
{
private:
	const string	_name;
	int				_grade;
public:
	//Orthodox Canonical Form
	Bureaucrat(void);
	Bureaucrat(const string name, const int grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat(void);
	Bureaucrat&	operator=(const Bureaucrat& other);

	//Setters and Getters
	void			setName(const string name);
	void			setGrade(const int grade);
	const int&		getGrade(void) const;
	const string&	getName(void) const;

	//Member functions
	void			incrementGrade(void);
	void			incrementGrade(const unsigned int amount);
	void			decrementGrade(void);
	void			decrementGrade(const unsigned int amount);
	void			signForm(Form& form);

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

//Non Member Functions
ostream&	operator<<(ostream &out, const Bureaucrat& bureaucrat);

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
