/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:11:13 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:11:14 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	x("Norkum");
	ScavTrap	y("Nobody");
	ScavTrap	a(x);
	ScavTrap	b(y);

	a.war(b);
	b.war(a);
	a.war(a);
	a.guardGate();
	a.status();
	b.status();

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
