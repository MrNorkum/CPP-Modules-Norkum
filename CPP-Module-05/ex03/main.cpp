/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/10 18:27:33 by Mr. Norkum                               */
/*   Updated: 2024/01/10 18:27:34 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm*	rrf = 0;
	AForm*	ppf = 0;
	AForm*	scf = 0;
	AForm*	unknown = 0;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		unknown = someRandomIntern.makeForm("unknown", "Bender");

		cout << *dynamic_cast<RobotomyRequestForm*>(rrf) << endl;
		cout << *dynamic_cast<PresidentialPardonForm*>(ppf) << endl;
		cout << *dynamic_cast<ShrubberyCreationForm*>(scf) << endl;
		//cout << *unknown << endl;

		delete rrf;
		delete ppf;
		delete scf;
		delete unknown;
	}
	catch(const exception& e)
	{
		std::cerr << e.what() << endl;
		delete rrf; delete ppf;
		delete scf; delete unknown;
	}

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
