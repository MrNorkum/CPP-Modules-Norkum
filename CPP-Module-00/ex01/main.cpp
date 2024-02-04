/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/15 22:48:26 by Mr. Norkum                               */
/*   Updated: 2024/01/15 22:48:28 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	entrance(void)
{
	cout << endl;
	cout << "$------------------------------------------------$" << endl;
	cout << "$                                                $" << endl;
	cout << "$       Welcome to my awesome phone book 🖐       $" << endl;
	cout << "$                                                $" << endl;
	cout << "$ ADD:    Adds a new contact to the phone book   $" << endl;
	cout << "$ SEARCH: Allows you to search the phone book    $" << endl;
	cout << "$ EXIT:   Allows you to exit the program         $" << endl;
	cout << "$                                                $" << endl;
	cout << "$           Github.com ~> MrNorkum               $" << endl;
	cout << "$           Intra 42   ~> HKELES                 $" << endl;
	cout << "$------------------------------------------------$" << endl;
	cout << endl << "What do you want? Tell me." << endl << endl;
}

string	input(string in)
{
	for (unsigned long i = 0; i <= in.length(); i++)
		in[i] = (char)toupper((int)in[i]);
	return (in);
}

int	main(void)
{
	PhoneBook	PhoneBook;
	string		in;

	entrance();
	while (1)
	{
		cout << "~> ";
		getline(cin, in);
		if (input(in) == "EXIT")
			break ;
		else if (input(in) == "ADD")
			PhoneBook.add();
		else if (input(in) == "SEARCH")
			PhoneBook.search();
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
