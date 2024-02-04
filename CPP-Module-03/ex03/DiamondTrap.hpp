/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   DiamondTrap.hpp                                                          */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/17 10:31:08 by Mr. Norkum                               */
/*   Updated: 2024/01/17 10:31:10 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                              DiamondTrap Class                             */
/* ************************************************************************** */

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	string	_name;
	DiamondTrap(void);
public:
	//Orthodox Canonical Form
	DiamondTrap(const string name);
	DiamondTrap(const DiamondTrap& copy);
	~DiamondTrap(void);
	DiamondTrap&	operator=(const DiamondTrap& other);

	//Setters and Getters
	void			setDiamondName(const string name);
	const string&	getDiamondName(void) const;

	//Member functions
	void			war(DiamondTrap& target);
	void			diamondStatus(void);
	void			attack(const string& target);
	void			whoAmI(void);
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
