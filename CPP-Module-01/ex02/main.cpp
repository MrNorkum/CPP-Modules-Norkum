/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 13:15:32 by Mr. Norkum                               */
/*   Updated: 2024/01/16 13:15:33 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

int main(void)
{
	string	myString = "HI THIS IS BRAIN";
	string*	stringPTR = &myString;
	string&	stringREF = myString;

	cout << "-------------------------------------------------------------------$" << endl;
	cout << "The memory address of the string variable	~> " << &myString << endl;
	cout << "The memory address held by stringPTR		~> " << stringPTR << endl;
	cout << "The memory address held by stringREF		~> " << &stringREF << endl;
	cout << "-------------------------------------------------------------------$" << endl;
	cout << "The value of the string variable.		~> " << myString << endl;
	cout << "The value pointed to by stringPTR.		~> " << *stringPTR << endl;
	cout << "The value pointed to by stringREF.		~> " << stringREF << endl;
	cout << "-------------------------------------------------------------------$" << endl;
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
