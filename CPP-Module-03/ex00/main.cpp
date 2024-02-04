/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                                                 */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 08:41:14 by Mr. Norkum                               */
/*   Updated: 2024/01/17 08:41:15 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Norkum");
	ClapTrap	b("Nobody");
	ClapTrap	c(a);
	ClapTrap	d(b);

	a.setAttackDamage(4);
	b.setAttackDamage(3);
	c.war(d);
	d.beRepaired(3);
	c.war(d);
	d.war(c);
	c.status();
	d.status();
	c.war(d);
	d.beRepaired(2);
	c.war(d);
	d.war(c);
	c.status();
	d.status();
	c.war(c);

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
