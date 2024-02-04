/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScavTrap.cpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:05:25 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:05:26 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->ScavTrap::ScavTrap(void); (Private)                                    */
/*   ->ScavTrap::ScavTrap(const string name);                                 */
/*   ->ScavTrap::ScavTrap(const ScavTrap& copy);                              */
/*   ->ScavTrap::~ScavTrap(void);                                             */
/*                                                                            */
/*   ->ScavTrap&   ScavTrap::operator=(const ScavTrap& other);                */
/*                                                                            */
/* ************************************************************************** */

ScavTrap::ScavTrap(void) : ClapTrap("")
{
	cout << "Default constructor called (ScavTrap)" << endl;
}

ScavTrap::ScavTrap(const string name) : ClapTrap(name)
{
	cout << "Name parameterized constructor called (ScavTrap)" << endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	cout << "Copy constructor called (ScavTrap)" << endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	cout << "Destructor called (ScavTrap)" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	cout << "Copy assignment operator called (ScavTrap)" << endl;
	this->ClapTrap::operator=(other);
	return (*this);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    ScavTrap::war(ScavTrap& target);                               */
/*   ->void    ScavTrap::attack(const string& target);                        */
/*   ->void    ScavTrap::guardGate(void);                                     */
/*                                                                            */
/* ************************************************************************** */

void	ScavTrap::war(ScavTrap& target)
{
	if (this != &target)
	{
		attack(target.getName());
		target.takeDamage(getAttackDamage());
		return ;
	}
	if (getAttackDamage())
		cout << "ScavTrap " << getName() << " attempted suicide and was blocked by the developer!" << endl;
	else
		cout << "ScavTrap " << getName() << " is so weak it can't even hurt itself!" << endl;
}

void	ScavTrap::attack(const string& target)
{
	if (!getAttackDamage() || !getEnergyPoints() || !getHitPoints())
	{
		cout << getName() << " failed to attack " << target << endl;
		return ;
	}
	cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void	ScavTrap::guardGate(void)
{
	if (!getHitPoints())
	{
		cout << "ScavTrap " << getName() << " can't activate gatekeeper mode!" << endl;
		return ;
	}
	cout << "ScavTrap " << getName() << " activates gatekeeper mode!" << endl;
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
