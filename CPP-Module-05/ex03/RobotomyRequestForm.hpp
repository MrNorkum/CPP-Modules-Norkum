/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   RobotomyRequestForm.hpp                                                  */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/25 17:21:51 by Mr. Norkum                               */
/*   Updated: 2024/01/25 17:21:52 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>
# include <ctime>

# define ofstream std::ofstream

/* ************************************************************************** */
/*                         RobotomyRequestForm Class                          */
/* ************************************************************************** */

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
	private:
		const string	_target;
		RobotomyRequestForm(void);
	public:
		//Orthodox Canonical Form
		RobotomyRequestForm(const string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

		//Setters and Getters
		void			setTarget(const string target);
		const string&	getTarget(void) const;

		//Member functions
		void	execute(Bureaucrat const& executor) const;
};

//Non Member Functions
ostream&	operator<<(ostream& out, const RobotomyRequestForm& form);

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
