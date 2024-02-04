/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 16:08:17 by Mr. Norkum                               */
/*   Updated: 2024/01/16 16:08:19 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << "You have to enter 4 arguments!" << endl;
		return (1);
	}
	return (Replace::replace(argv[1], argv[2], argv[3]));
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
