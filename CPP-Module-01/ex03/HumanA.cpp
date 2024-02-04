/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   HumanA.cpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 13:41:57 by Mr. Norkum                               */
/*   Updated: 2024/01/16 13:42:05 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* ************************************************************************** */
/*                        Constructor and Destructor                          */
/*                                                                            */
/*   ->HumanA::HumanA(const string name, Weapon& weapon);                     */
/*   ->HumanA::~HumanA(void);                                                 */
/*                                                                            */
/* ************************************************************************** */

HumanA::HumanA(string name, Weapon& weapon) : _weapon(weapon)
{
	cout << "Multi parameterized constructor called (HumanA)" << endl;
	setName(name);
}

HumanA::~HumanA(void)
{
	cout << "Destructor called (HumanA)" << endl;
}

/* ************************************************************************** */
/*                          Setters and Getters                               */
/*                                                                            */
/*   ->void             HumanA::setName(const string name);                   */
/*   ->void             HumanA::setWeapon(Weapon& weapon);                    */
/*   ->const string&    HumanA::getName(void) const;                          */
/*   ->const Weapon&    HumanA::getWeapon(void) const;                        */
/*                                                                            */
/* ************************************************************************** */

void	HumanA::setName(const string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	this->_weapon = weapon;
}

const string&	HumanA::getName(void) const
{
	return (this->_name);
}

const Weapon&	HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    HumanA::attack(void) const;                                    */
/*                                                                            */
/* ************************************************************************** */

void	HumanA::attack(void) const
{
	cout << getName() << " attacks with their " << getWeapon().getType() << endl;
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
