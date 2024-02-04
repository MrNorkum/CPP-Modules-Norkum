/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Base.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/27 08:54:17 by Mr. Norkum                               */
/*   Updated: 2024/01/27 08:54:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/* ************************************************************************** */
/*                             Destructor                                     */
/*                                                                            */
/*   ->Base::~Base(void);                                                     */
/*                                                                            */
/* ************************************************************************** */

Base::~Base(void){}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->Base*    generate(void);                                               */
/*   ->void     identify(Base* p);                                            */
/*   ->void     identify(Base& p);                                            */
/*                                                                            */
/* ************************************************************************** */

Base*	generate(void)
{
	srand(time(NULL));

	unsigned char n = rand() % 3;
	if (n == 0)
		return (new A());
	else if (n == 1)
		return (new B());
	return (new C());
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		cout << "\'A\' class was identified!" << endl;
		return ;
	}
	else if (dynamic_cast<B*>(p) != NULL)
	{
		cout << "\'B\' class was identified!" << endl;
		return ;
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		cout << "\'C\' class was identified!" << endl;
		return ;
	}
	cout << "Can't identify the class!" << endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		cout << "\'A\' class was identified!" << endl;
		return ;
	}
	catch (...) {}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		cout << "\'B\' class was identified!" << endl;
		return ;
	}
	catch (...) {}

	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c ;
		cout << "\'C\' class was identified!" << endl;
		return ;
	}
	catch (...) {}

	cout << "Can't identify the class!" << endl;
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
