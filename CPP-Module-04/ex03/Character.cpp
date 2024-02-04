/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Character.cpp                                                            */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/20 04:53:13 by Mr. Norkum                               */
/*   Updated: 2024/01/20 04:53:14 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->Character::Character(void);                                            */
/*   ->Character::Character(const string& name);                              */
/*   ->Character::Character(const Character& copy);                           */
/*   ->Character::~Character(void);                                           */
/*                                                                            */
/*   ->Character&   Character::operator=(const Character& other);             */
/*                                                                            */
/* ************************************************************************** */

Character::Character(void)
{
	setName("Unknown name");
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const string& name)
{
	setName(name);
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (!!this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void             Character::setType(const string& name);               */
/*   ->const string&    Character::getType(void) const;                       */
/*                                                                            */
/* ************************************************************************** */

void	Character::setName(const string& name)
{
	this->_name = name;
}

const string&	Character::getName(void) const
{
	return (this->_name);
}

/* ************************************************************************** */
/*                             Member functions                               */
/*                                                                            */
/*   ->void    Character::equip(AMateria* m);                                 */
/*   ->void    Character::unequip(int idx);                                   */
/*   ->void    Character::use(int idx, ICharacter& target);                   */
/*                                                                            */
/* ************************************************************************** */

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
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
