/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PresidentialPardonForm.hpp                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/25 17:21:51 by Mr. Norkum                               */
/*   Updated: 2024/01/25 17:21:52 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

/* ************************************************************************** */
/*                       PresidentialPardonForm Class                         */
/* ************************************************************************** */

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		const string	_target;
		PresidentialPardonForm(void);
	public:
		//Orthodox Canonical Form
		PresidentialPardonForm(const string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

		//Setters and Getters
		void			setTarget(const string target);
		const string&	getTarget(void) const;

		//Member functions
		void	execute(Bureaucrat const& executor) const;
};

//Non Member Functions
ostream&	operator<<(ostream& out, const PresidentialPardonForm& form);

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
