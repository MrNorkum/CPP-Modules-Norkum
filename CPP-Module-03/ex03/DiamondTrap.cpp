/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   DiamondTrap.cpp                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:32:01 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:32:02 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->DiamondTrap::DiamondTrap(void); (Private)                              */
/*   ->DiamondTrap::DiamondTrap(const string name);                           */
/*   ->DiamondTrap::DiamondTrap(const DiamondTrap& copy);                     */
/*   ->DiamondTrap::~DiamondTrap(void);                                       */
/*                                                                            */
/*   ->DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& other);      */
/*                                                                            */
/* ************************************************************************** */

DiamondTrap::DiamondTrap(void) : ClapTrap(""), ScavTrap(""), FragTrap("")
{
	cout << "Default constructor called (DiamondTrap)" << endl;
	setDiamondName("");
}

DiamondTrap::DiamondTrap(const string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	cout << "Name parameterized constructor called (DiamondTrap)" << endl;
	setDiamondName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	cout << "Copy constructor called (DiamondTrap)" << endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "Destructor called (DiamondTrap)" << endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	cout << "Copy assignment operator called (DiamondTrap)" << endl;
	if (this != &other)
	{
		this->_name = other.getDiamondName();
		this->ClapTrap::operator=(other);
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void    DiamondTrap::setDiamondName(const string name);                */
/*   ->const string& DiamondTrap::getDiamondName(void) const;                 */
/*                                                                            */
/* ************************************************************************** */

void	DiamondTrap::setDiamondName(const string name)
{
	this->_name = name;
	if (this->_name == "" || this->_name == "(unknown)")
	{
		this->_name = "(unknown)";
		setName("(unknown_clap_name)");
	}
}

const string&	DiamondTrap::getDiamondName(void) const
{
	return (this->_name);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    DiamondTrap::war(ClapTrap& target);                            */
/*   ->void    DiamondTrap::war(ScavTrap& target);                            */
/*   ->void    DiamondTrap::war(FragTrap& target);                            */
/*   ->void    DiamondTrap::war(DiamondTrap& target);                         */
/*   ->void    DiamondTrap::attack(const string& target);                     */
/*   ->void    DiamondTrap::diamondStatus(void);                              */
/*   ->void    DiamondTrap::whoAmI(void);                                     */
/*                                                                            */
/* ************************************************************************** */

void	DiamondTrap::war(DiamondTrap& target)
{
	if (this != &target)
	{
		attack(target.getName());
		target.takeDamage(getAttackDamage());
		return ;
	}
	if (getAttackDamage())
		cout << "DiamondTrap " << getName() << " attempted suicide and was blocked by the developer!" << endl;
	else
		cout << "DiamondTrap " << getName() << " is so weak it can't even hurt itself!" << endl;
}

void	DiamondTrap::diamondStatus(void)
{
	string	living;
	string	energy;
	string	damage;

	living = "(alive)";
	energy = "(active)";
	damage = "(active)";
	if (!getAttackDamage() || !getEnergyPoints() || !getHitPoints())
	{
		damage = "(deactive)";
		if (!getEnergyPoints() || !getHitPoints())
		{
			energy = "(deactive)";
			if (!getHitPoints())
				living = "(died)";
		}
	}
	cout << "------------------------------" << endl;
	cout << "Status		" << "<" << getDiamondName() << ">" << endl;
	cout << "Clap Name:	" << getName() << endl;
	cout << "Hit Points:	" << getHitPoints() << " " << living << endl;
	cout << "Energy Points:	" << getEnergyPoints() << " " << energy << endl;
	cout << "Attack Damage:	" << getAttackDamage() << " " << damage << endl;
	cout << "------------------------------" << endl;
}

void	DiamondTrap::attack(const string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	cout << "Hello, my name is " << getDiamondName() << " and my Clap name is " << getName() << endl;
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
