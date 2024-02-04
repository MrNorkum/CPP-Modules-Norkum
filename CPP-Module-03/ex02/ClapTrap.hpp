/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ClapTrap.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 09:37:01 by Mr. Norkum                               */
/*   Updated: 2024/01/17 09:37:04 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

/* ************************************************************************** */
/*                              ClapTrap Class                                */
/* ************************************************************************** */

class ClapTrap
{
private:
	string			_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	ClapTrap(void);
public:
	//Orthodox Canonical Form
	ClapTrap(const string name);
	ClapTrap(const ClapTrap& copy);
	~ClapTrap(void);
	ClapTrap&		operator=(const ClapTrap& other);

	//Setters and Getters
	void			setName(const string name);
	void			setHitPoints(unsigned int hitPoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDamage(unsigned int attackDamage);
	const string&	getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

	//Member functions
	void			attack(const string& target);
	void			takeDamage(unsigned int amount);
	void			war(ClapTrap& target);
	void			beRepaired(unsigned int amount);
	void			status(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
