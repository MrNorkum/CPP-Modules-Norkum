/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 11:26:42 by Mr. Norkum                               */
/*   Updated: 2024/01/16 11:26:44 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	try
	{
		int N;
		Zombie* horde;

		N = 3;
		horde = zombieHorde(N, "Norkum");

		for (int idx = 0; idx < N; idx++)
			horde[idx].announce();

		delete[] horde;
	}
	catch(const std::exception& e)
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
