/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   megaphone.cpp                                                            */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/15 22:38:28 by Mr. Norkum                               */
/*   Updated: 2024/01/15 22:38:29 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define toupper std::toupper

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			string str = argv[i];
			for (int j = 0; str[j]; j++)
				cout << (char)toupper(str[j]);
		}
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
