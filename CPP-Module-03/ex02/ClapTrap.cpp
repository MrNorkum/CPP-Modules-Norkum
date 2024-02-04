/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ClapTrap.cpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 09:41:57 by Mr. Norkum                   ig:mrnorkum */
/*   Updated: 2024/01/17 09:42:00 by Mr. Norkum                   tg:mrnorkum */
/*                                                                dc:mrnorkum */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/*                                                                            */
/*   ->ClapTrap::ClapTrap(void); (Private)                                    */
/*   ->ClapTrap::ClapTrap(const string name);                                 */
/*   ->ClapTrap::ClapTrap(const ClapTrap& copy);                              */
/*   ->ClapTrap::~ClapTrap(void);                                             */
/*                                                                            */
/*   ->ClapTrap&   ClapTrap::operator=(const ClapTrap& other);                */
/*                                                                            */
/* ************************************************************************** */

ClapTrap::ClapTrap(void)
{
	cout << "Default constructor called (ClapTrap)" << endl;
	setName("");
}

ClapTrap::ClapTrap(const string name)
{
	cout << "Name parameterized constructor called (ClapTrap)" << endl;
	setName(name);
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	cout << "Copy constructor called (ClapTrap)" << endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	cout << "Destructor called (ClapTrap)" << endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	cout << "Copy assignment operator called (ClapTrap)" << endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

/* ************************************************************************** */
/*                             Setters and Getters                            */
/*                                                                            */
/*   ->void    ClapTrap::setName(const string name);                          */
/*   ->void    ClapTrap::setHitPoints(unsigned int hitPoints);                */
/*   ->void    ClapTrap::setEnergyPoints(unsigned int energyPoints);          */
/*   ->void    ClapTrap::setAttackDamage(unsigned int attackDamage);          */
/*   ->const string&   ClapTrap::getName(void) const;                         */
/*   ->unsigned int    ClapTrap::getHitPoints(void) const;                    */
/*   ->unsigned int    ClapTrap::getEnergyPoints(void) const;                 */
/*   ->unsigned int    ClapTrap::getAttackDamage(void) const;                 */
/*                                                                            */
/* ************************************************************************** */

void	ClapTrap::setName(const string name)
{
	this->_name = name;
	if (this->_name == "" || this->_name == "(unknown)")
	{
		this->_name = "(unknown)";
		setHitPoints(0);
	}
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints * !(getName() == "" || getName() == "(unknown)");
	if (!this->_hitPoints)
		setEnergyPoints(0);
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints * !!getHitPoints();
	if (!this->_energyPoints)
		setAttackDamage(0);
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_attackDamage = attackDamage * !!getEnergyPoints();
}

const string&	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

/* ************************************************************************** */
/*                             Member Functions                               */
/*                                                                            */
/*   ->void    ClapTrap::attack(const string& target);                        */
/*   ->void    ClapTrap::takeDamage(unsigned int amount);                     */
/*   ->void    ClapTrap::war(ClapTrap& target);                               */
/*   ->void    ClapTrap::beRepaired(unsigned int amount);                     */
/*   ->void    ClapTrap::status(void) const;                                  */
/*                                                                            */
/* ************************************************************************** */

void	ClapTrap::attack(const string& target)
{
	if (!getAttackDamage() || !getEnergyPoints() || !getHitPoints())
	{
		cout << getName() << " failed to attack " << target << endl;
		return ;
	}
	cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!getHitPoints())
		cout << getName() << " can't take damage because she's dead!" << endl;
	else if (!amount)
		cout << getName() << " took no damage!" << endl;
	else
	{
		cout << getName() << " was attacked and took " << amount << " damage points! ";
		if (getHitPoints() <= amount)
		{
			cout << "(died)" << endl;
			setHitPoints(0);
			return ;
		}
		cout << "(survived)" << endl;
		setHitPoints(getHitPoints() - amount);
	}
}

void	ClapTrap::war(ClapTrap& target)
{
	if (this != &target)
	{
		attack(target.getName());
		target.takeDamage(getAttackDamage());
		return ;
	}
	if (getAttackDamage())
		cout << "ClapTrap " << getName() << " attempted suicide and was blocked by the developer!" << endl;
	else
		cout << "ClapTrap " << getName() << " is so weak it can't even hurt itself!" << endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!getEnergyPoints() || !getHitPoints())
	{
		cout << getName() << " failed to regenerate hitpoints!" << endl;
		return ;
	}
	cout << getName() << " " << amount << " health healed!" << endl;
	setHitPoints(getHitPoints() + amount);
	setEnergyPoints(getEnergyPoints() - 1);
}

void	ClapTrap::status(void) const
{
	string living;
	string energy;
	string damage;

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
	cout << "Status		" << "<" << getName() << ">" << endl;
	cout << "Hit Points:	" << getHitPoints() << " " << living << endl;
	cout << "Energy Points:	" << getEnergyPoints() << " " << energy << endl;
	cout << "Attack Damage:	" << getAttackDamage() << " " << damage << endl;
	cout << "------------------------------" << endl;
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
