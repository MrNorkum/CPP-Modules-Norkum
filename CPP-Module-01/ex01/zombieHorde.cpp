/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   zombieHorde.cpp                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 11:24:23 by Mr. Norkum                               */
/*   Updated: 2024/01/16 11:24:24 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->Zombie*    zombieHorde(int N, string name);                            */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

Zombie*	zombieHorde(int N, string name)
{
	if (N == 0)
		return (0);

	Zombie *horde = new Zombie[N];

	for (int idx = 0; idx < N; idx++)
	{
		string s("#1"); s[1] += idx;
		horde[idx].setName(name + s);
	}

	return (horde);
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
