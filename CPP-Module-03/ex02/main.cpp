/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:24:58 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:24:59 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap	x("Nobody");
	FragTrap	y("Norkum");
	FragTrap	a(x);
	FragTrap	b(y);

	a.war(b);
	b.war(a);
	b.highFivesGuys();
	a.war(a);
	b.war(b);
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
