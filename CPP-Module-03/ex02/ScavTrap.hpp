/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ScavTrap.hpp                                                             */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:04:03 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:04:05 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                              ScavTrap Class                                */
/* ************************************************************************** */

class ScavTrap : public ClapTrap
{
private:
	ScavTrap(void);
public:
	//Orthodox Canonical Form
	ScavTrap(const string name);
	ScavTrap(const ScavTrap& copy);
	~ScavTrap(void);
	ScavTrap&	operator=(const ScavTrap& other);

	//Member functions
	void	war(ScavTrap& target);
	void	attack(const string& target);
	void	guardGate(void);
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
