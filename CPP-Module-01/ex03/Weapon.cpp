/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Weapon.cpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 14:11:27 by Mr. Norkum                               */
/*   Updated: 2024/01/16 14:11:28 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* ************************************************************************** */
/*                         Constructor and Destructor                         */
/*                                                                            */
/*   ->Weapon::Weapon(void);                                                  */
/*   ->Weapon::Weapon(const string type);                                     */
/*   ->Weapon::~Weapon(void);                                                 */
/*                                                                            */
/* ************************************************************************** */

Weapon::Weapon(void)
{
	cout << "Default constructor called (Weapon)" << endl;
	setType("");
}

Weapon::Weapon(const string type)
{
	cout << "Type parameterized constructor called (Weapon)" << endl;
	setType(type);
}

Weapon::~Weapon(void)
{
	cout << "Destructor called (Weapon)" << endl;
}

/* ************************************************************************** */
/*                          Setters and Getters                               */
/*                                                                            */
/*   ->void             Weapon::setType(const string type);                   */
/*   ->const string&    Weapon::getType(void);                                */
/*                                                                            */
/* ************************************************************************** */

void	Weapon::setType(const string type)
{
	this->_type = type;
}

const string&	Weapon::getType(void) const
{
	return (this->_type);
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
