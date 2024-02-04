/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 01:05:01 by Mr. Norkum                               */
/*   Updated: 2024/02/01 01:05:04 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "Error: more or less argument" << endl;
		return (1);
	}

	try
	{
		BitcoinExchange btc;
		btc.readInput(argv[1]);
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
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
