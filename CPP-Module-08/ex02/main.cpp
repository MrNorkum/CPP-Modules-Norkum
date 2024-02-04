/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 08:09:52 by Mr. Norkum                               */
/*   Updated: 2024/02/01 08:09:53 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	{
		cout << endl << "-- Mutant Stack:" << endl;

		MutantStack<int> mstack;

		mstack.push(5); mstack.push(17);

		cout << "Stack top (expecting 17): " << mstack.top() << endl;
		mstack.pop();
		cout << "Stack size (expecting 1): " << mstack.size() << endl;

		mstack.push(3); mstack.push(5);
		mstack.push(737); mstack.push(0);

		cout << "Iterating over mstack from begin() to end() (expecting 5, 3, 5, 737, 0): " << endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it; --it;

		while (it != ite)
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	{
		cout << endl << "-- List:" << endl;
		list<int> mstack;

		mstack.push_back(5); mstack.push_back(17);

		cout << "List \"top\" (back) (expecting 17): " << mstack.back() << endl;
		mstack.pop_back();
		cout << "Stack size (expecting 1): " << mstack.size() << endl;

		mstack.push_back(3); mstack.push_back(5);
		mstack.push_back(737); mstack.push_back(0);

		cout << "Iterating over mstack list from begin() to end() (expecting 5, 3, 5, 737, 0): " << endl;
		list<int>::iterator it = mstack.begin();
		list<int>::iterator ite = mstack.end();

		++it; --it;

		while (it != ite)
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}
	return (cout << endl, 0);
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
