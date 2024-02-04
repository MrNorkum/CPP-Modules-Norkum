/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:53:38 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:53:42 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	a("Nobody");
	DiamondTrap	b("Norkum");

	a.war(b);
	b.war(a);
	a.war(a);
	b.war(b);
	a.guardGate();
	b.highFivesGuys();
	a.status();
	b.status();
	a.whoAmI();
	b.whoAmI();

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
