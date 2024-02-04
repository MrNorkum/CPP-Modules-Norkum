/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Zombie.cpp                                                               */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/16 10:58:09 by Mr. Norkum                               */
/*   Updated: 2024/01/16 10:58:10 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/*                        Constructor and Destructor                          */
/*                                                                            */
/*   ->Zombie::Zombie(void);                                                  */
/*   ->Zombie::Zombie(string name);                                           */
/*   ->Zombie::~Zombie(void);                                                 */
/*                                                                            */
/* ************************************************************************** */

Zombie::Zombie(void)
{
	cout << "A zombie egg has formed" << endl;
	setName("");
}

Zombie::Zombie(const string name)
{
	cout << "Zombie " << name << " has emerged from its egg ‍♂️" << endl;
	setName(name);
}

Zombie::~Zombie(void)
{
	cout << getName() << " is dead 💀" << endl;
}

/* ************************************************************************** */
/*                          Setters and Getters                               */
/*                                                                            */
/*   ->void             Contact::setName(const string name);                  */
/*   ->const string&    Contact::getName(void);                               */
/*                                                                            */
/* ************************************************************************** */

void	Zombie::setName(const string name)
{
	cout << "Zombie " << name << " has emerged from its egg ‍♂️" << endl;
	this->_name = name;
}

const string&	Zombie::getName(void) const
{
	return (this->_name);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    Zombie::announce(void);                                        */
/*                                                                            */
/* ************************************************************************** */

void	Zombie::announce(void)
{
	cout << getName() << ":  BraiiiiiiinnnzzzZ..." << endl;
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
