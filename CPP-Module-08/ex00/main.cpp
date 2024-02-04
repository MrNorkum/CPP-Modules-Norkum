/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 06:32:31 by Mr. Norkum                               */
/*   Updated: 2024/02/01 06:32:33 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[33m"
#define PURPLE	"\033[35m"

void	pressEnter(void)
{
	cout << endl << "press ENTER to continue" << endl;
	cin.ignore();
	cout << "\033c";
}

void	debugMessage(const string color, const string msg)
{
	cout << endl;
	cout << color;
	cout << msg << "> ";
	cout << RESET;
	cout << endl;
}

void titleHeader(const string msg)
{
    cout << "\033c";
    int standartSize = 34;
    int messageSize = msg.length();
    int spaces = (standartSize - messageSize) / 2;

    cout << "************************************" << endl << "*";
	for (int i = 0; i < spaces; i++)
		cout << " ";
	cout << msg;
	for (int i = 0; i < spaces; i++)
		cout << " ";
	cout << "*" << endl << "************************************" << endl;
}

int main(void)
{
	{
		titleHeader("TEST WITH VECTOR TYPE");

		vector<int> vec;

		for (int i = 0; i < 10; i++)
			vec.push_back(i * i);

		debugMessage(GREEN, "Status");
		cout << "print the created vector content" << endl;
		for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			cout << "[" << *it << "] ";
		cout << endl;

		try
		{
			debugMessage(PURPLE, "Action");
			::easyfind(vec, 25);
		}
		catch(const exception& e)
		{
			cerr << RED << e.what() << RESET << endl;
		}

		try
		{
			debugMessage(PURPLE, "Action");
			::easyfind(vec, 100);
		}
		catch(const exception& e)
		{
			cerr << RED << "\t" << e.what() << RESET << endl;
		}
	}
	pressEnter();
	{
		titleHeader("TEST WITH DEQUE TYPE");

		deque<int> deq;

		for (int i = 0; i < 10; i++)
			deq.push_back(i * (i / 2));

		debugMessage(GREEN, "Status");
		cout << "print the created deque content" << endl;
		for (deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
			cout << "[" << *it << "] ";
		cout << endl;

		try
		{
			debugMessage(PURPLE, "Action");
			::easyfind(deq, 0);
		}
		catch(const exception& e)
		{
			cerr << RED << "\t" << e.what() << RESET << endl;
		}

		try
		{
			debugMessage(PURPLE, "Action");
			::easyfind(deq, 7);
		}
		catch(const exception& e)
		{
			cerr << RED << "\t" << e.what() << RESET << endl;
		}
	}
	pressEnter();
	{
		titleHeader("TEST WITH LIST TYPE");

		list<int> lst;

		for (int i = 0; i < 10; i++)
			lst.push_back(i * (i + 1));

		debugMessage(GREEN, "Status");
		cout << "print the created list content" << endl;
		for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
			cout << "[" << *it << "] ";
		cout << endl;

		try
		{
			debugMessage(PURPLE, "Action");
			::easyfind(lst, 56);
		}
		catch(const exception& e)
		{
			cerr << RED << "\t" << e.what() << RESET << endl;
		}

		try
		{
			debugMessage(PURPLE, "Action");
			::easyfind(lst, 91);
		}
		catch(const exception& e)
		{
			cerr << RED << "\t" << e.what() << RESET << endl;
		}
	}
	pressEnter();
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
