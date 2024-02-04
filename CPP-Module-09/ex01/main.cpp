/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/02/01 04:50:18 by Mr. Norkum                               */
/*   Updated: 2024/02/01 04:50:19 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "Error: No inverted Polish mathematical expression provided." << endl;
		return (1);
	}

	try
	{
		RPN_calculator(argv[1]);
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
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
