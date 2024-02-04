/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanB.cpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 13:53:28 by Mr. Norkum                               */
/*   Updated: 2024/01/16 13:53:29 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* ************************************************************************** */
/*                        Constructor and Destructor                          */
/*                                                                            */
/*   ->HumanB::HumanB(const string name);                                     */
/*   ->HumanB::HumanB(const string name, Weapon& weapon);                     */
/*   ->HumanA::~HumanA(void);                                                 */
/*                                                                            */
/* ************************************************************************** */

HumanB::HumanB(const string name) : _weapon(0)
{
	cout << "Parametized constructor called (HumanB)" << endl;
	setName(name);
}

HumanB::HumanB(const string name, Weapon& weapon)
{
	cout << "Parametized constructor called (HumanB)" << endl;
	setWeapon(weapon);
	setName(name);
}

HumanB::~HumanB(void)
{
	cout << "Destructor called (HumanB)" << endl;
}

/* ************************************************************************** */
/*                          Setters and Getters                               */
/*                                                                            */
/*   ->void             HumanB::setName(const string name);                   */
/*   ->void             HumanB::setWeapon(Weapon& weapon);                    */
/*   ->const string&    HumanB::getName(void) const;                          */
/*   ->const Weapon*    HumanB::getWeapon(void) const;                        */
/*                                                                            */
/* ************************************************************************** */

void	HumanB::setName(const string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	this->_weapon = (Weapon *)&weapon;
}

const string&	HumanB::getName(void) const
{
	return (this->_name);
}

const Weapon*	HumanB::getWeapon(void) const
{
	return (this->_weapon);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    HumanB::attack(void) const;                                    */
/*                                                                            */
/* ************************************************************************** */

void	HumanB::attack(void) const
{
	if (getWeapon())
		cout << getName() << " attacks with their " << getWeapon()->getType() << endl;
	else
		cout << getName() << " doesn't have a weapon to attack." << endl;
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
