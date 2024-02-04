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

int main(void)
{
	Bureaucrat *b1 = 0, *b2 = 0, *b3 = 0, *b4 = 0;
	try
	{
		b1 = new Bureaucrat("Bob", high);
		b1->decrementGrade();
		cout << *b1 << endl;
		delete b1; b1 = 0;

		b2 = new Bureaucrat("Joe", low);
		b2->incrementGrade();
		cout << *b2 << endl;
		delete b2; b2 = 0;

		b3 = new Bureaucrat("Sally", high);
		cout << *b3 << endl;
		b3->incrementGrade();
		delete b3; b3 = 0;

		b4 = new Bureaucrat("John", low);
		b4->decrementGrade();
		delete b4; b4 = 0;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
		delete b1; delete b2;
		delete b3; delete b4;
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

