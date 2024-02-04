/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FragTrap.cpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:22:38 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:22:45 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->FragTrap::FragTrap(void); (Private)                                    */
/*   ->FragTrap::FragTrap(const string name);                                 */
/*   ->FragTrap::FragTrap(const FragTrap& copy);                              */
/*   ->FragTrap::~FragTrap(void);                                             */
/*                                                                            */
/*   ->FragTrap&   FragTrap::operator=(const FragTrap& other);                */
/*                                                                            */
/* ************************************************************************** */

FragTrap::FragTrap(void) : ClapTrap("")
{
	cout << "Default constructor called (FragTrap)" << endl;
}

FragTrap::FragTrap(const string name) : ClapTrap(name)
{
	cout << "Name parameterized constructor called (FragTrap)" << endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	cout << "Copy constructor called (FragTrap)" << endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	cout << "Destructor called (FragTrap)" << endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	cout << "Copy assignment operator called (FragTrap)" << endl;
	this->ClapTrap::operator=(other);
	return (*this);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    FragTrap::war(ClapTrap& target);                               */
/*   ->void    FragTrap::war(FragTrap& target);                               */
/*   ->void    FragTrap::highFivesGuys(void);                                 */
/*                                                                            */
/* ************************************************************************** */

void	FragTrap::war(FragTrap& target)
{
	if (this != &target)
	{
		attack(target.getName());
		target.takeDamage(getAttackDamage());
		return ;
	}
	if (getAttackDamage())
		cout << "FragTrap " << getName() << " attempted suicide and was blocked by the developer!" << endl;
	else
		cout << "FragTrap " << getName() << " is so weak it can't even hurt itself!" << endl;
}

void	FragTrap::highFivesGuys(void)
{
	cout << getName() << " FragTrap gave a solid high five!" << endl;
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
