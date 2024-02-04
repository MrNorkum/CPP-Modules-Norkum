/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ShrubberyCreationForm.hpp                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/25 17:21:51 by Mr. Norkum                               */
/*   Updated: 2024/01/25 17:21:52 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

# define ofstream std::ofstream

/* ************************************************************************** */
/*                       ShrubberyCreationForm Class                          */
/* ************************************************************************** */

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		const string	_target;
		ShrubberyCreationForm(void);
	public:
		//Orthodox Canonical Form
		ShrubberyCreationForm(const string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

		//Setters and Getters
		void			setTarget(const string target);
		const string&	getTarget(void) const;

		//Member functions
		void	execute(Bureaucrat const& executor) const;
};

//Non Member Functions
ostream&	operator<<(ostream& out, const ShrubberyCreationForm& form);

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
