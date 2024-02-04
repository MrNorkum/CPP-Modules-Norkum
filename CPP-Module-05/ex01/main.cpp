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

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	*norkum = 0;
	Form		*form = 0;
	try
	{
		norkum = new Bureaucrat("Norkum", 13);
		form = new Form("Cpp Module 05", 31, 31);

		cout << *norkum << endl;
		cout << *form << endl;
		norkum->incrementGrade();
		cout << *norkum << endl;
		norkum->incrementGrade(10);
		cout << *norkum << endl;
		norkum->signForm(*form);
		cout << *form << endl;
		norkum->decrementGrade(30);
		cout << *norkum << endl;
		norkum->signForm(*form);
		cout << *form << endl;

		delete norkum; delete form;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
		delete norkum; delete form;
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
